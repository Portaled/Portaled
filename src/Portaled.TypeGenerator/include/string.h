
struct PSRefBufferCharData_char
{
	char m_data[16];
};

const struct PStringBase_char
{
	PSRefBufferCharData_char* m_charbuffer;
};

struct PSRefBufferCharData_ushort
{
	unsigned __int16 m_data[16];
};

const struct PStringBase_ushort
{
	PSRefBufferCharData_ushort* m_charbuffer;
};


/*
struct CaseInsensitiveStringBase<PStringBase_char>> : PStringBase_char
{
};
*/