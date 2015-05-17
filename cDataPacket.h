#define MAX_UDPBUFFERSIZE 4096

class cDatePacket
{
public:
char d_data[MAX_UDPBUFFERSIZE];
unsigned short d_lenght,
				d_time;
double d_id,
		d_firstTime,
		d_lastTime;
		
cDatePacket();
virtual ~cDatePacket();

void Init(double time, double id, unsigned short len, const char *const pData);

cDataPacket &operator=(const cDataPacket &otherPacket);
};