//#include<queue>
//using namespace std;
//enum class WeatherDataType {
//	Temperature,Wind
//};
//struct TempData {
//	int StationId;
//	time_t time;
//	double current;
//	double max;
//	double min;
//};
//
//struct WindData {
//	int StationId;
//	time_t time;
//	int speed;
//	short direction;
//};
//
//struct Input
//{
//	WeatherDataType type;
//	union 
//	{
//		TempData temp;
//		WindData wind;
//	};
//};
//
//void Process_Temp(TempData t){}
//void Process_Wind(WindData w){}
//
//void Initialize(std::queue<Input>& inputs)
//{
//	Input first;
//	first.type = WeatherDataType::Temperature;
//	first.temp = { 101,141855664,91.8,108.5,67.2 };
//	inputs.push(first);
//
//	Input second;
//	second.type = WeatherDataType::Wind;
//	second.wind = { 204,1418859354,14,27 };
//	inputs.push(second);
//}
//int main() {
//	queue<Input> inputs;
//	Initialize(inputs);
//	while (!inputs.empty())
//	{
//		Input const i = inputs.front();
//		switch (i.type)
//		{
//		case WeatherDataType::Temperature:
//			Process_Temp(i.temp);
//			break;
//		case WeatherDataType::Wind:
//			Process_Wind(i.wind);
//			break;
//		default:
//			break;
//		}
//		inputs.pop();
//	}
//
//
//	return 0;
//}