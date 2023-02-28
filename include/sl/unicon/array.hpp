#ifndef __SL_UNICON_ARRAY__
#define __SL_UNICON_ARRAY__

namespace sl 
{
    namespace unicon
    {
        template<class eType,int eCount>
        class slStackArray
        {
            public:
            slStackArray()
            {}
            template<class inType = eType,int inCount = eCount>
            slStackArray(const inType (&inarray) [inCount])
            {
                for(int i = 0;i < eCount && i < inCount;i++)
                    this->array[i] = static_cast<eType>(inarray[i]);
            }
            template<class inType = eType>
            slStackArray(const inType *inarray,int ecount = eCount)
            {
                for(int i = 0;i < ecount;i++)
                    this->array[i] = static_cast<eType>(inarray[i]);
            }
            template<class ... inType>
            slStackArray(const inType&... inarray)
            {
                int i = 0;
                ([&]()
                {
                    this->array[i++] = static_cast<decltype(inarray)>(inarray);
                }(),...);
            }
            ~slStackArray()
            {}
            template<class inType = eType,int inCount = eCount>
            const slStackArray & operator = (const inType (&inarray) [inCount])
            {
                for(int i = 0;i < eCount && i < inCount;i++)
                    this->array[i] = static_cast<eType>(inarray[i]);
                return *this;
            }
            template<class inType = eType>
            const slStackArray & operator = (const slStackArray<inType,eCount> &inarray)
            {
                
                for(int i = 0;i < eCount;i++)
                    this->array[i] = static_cast<eType>(inarray[i]);
                return *this;
            }
            template<class inType>
            bool operator == (const slStackArray<inType,eCount> &another)const
            {
                for(int i = 0;i < eCount;i++)
                {
                    if(this->array[i] != static_cast<inType>(another[i]))
                        return false;
                }
                return true;
            }
            template<class inType>
            bool operator != (const slStackArray<inType,eCount> &another)const
            {
                for(int i = 0;i < eCount;i++)
                {
                    if(this->array[i] != static_cast<inType>(another[i]))
                        return true;
                }
                return false;
            }
            eType & operator [] (int index)
            {
                return this->array[index];
            }
            eType operator [] (int index)const
            {
                return this->array[index];
            }
            private:
            eType array [eCount];
        };
        template<class eType>
        class slHeapArray
        {
            public:
            slHeapArray():array(nullptr)
            {}
            template<class inType,int eCount>
            slHeapArray(const inType (&inarray) [eCount])
            {
                this->array = new eType [this->count = eCount];
                for(int i = 0;i < eCount;i++)
                    this->array[i] = static_cast<eType>(inarray[i]);
            }
            template<class inType>
            slHeapArray(const inType * inarray,int ecount)
            {
                this->array = new eType [this->count = ecount];
                for(int i = 0;i < ecount;i++)
                    this->array[i] = static_cast<eType>(inarray[i]);
            }
            template<class inType,int eCount>
            slHeapArray(const slStackArray<inType,eCount> &inarray)
            {
                this->array = new eType [this->count = eCount];
                for(int i = 0;i < eCount;i++)
                    this->array[i] = static_cast<eType>(inarray[i]);
            }
            ~slHeapArray()
            {
                this->clear();
            }
            void clear()
            {
                if(this->array)
                {
                    delete [] this->array;
                    this->array = nullptr;
                }
            }
            bool empty()const
            {
                return this->array == nullptr;
            }

            
            eType & operator [] (int index)
            {
                return this->array[index];
            }
            eType operator [] (int index)const
            {
                return this->array[index];
            }
            private:
            eType *array;
            int count;
        };
    }
}

#endif //!__SL_UNICON_ARRAY__