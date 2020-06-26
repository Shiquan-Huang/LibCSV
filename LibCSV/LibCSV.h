#ifdef LIBCSV_EXPORTS
#define LIBCSV_API __declspec(dllexport)
#else
#define LIBCSV_API __declspec(dllimport)
#endif // LIBCSV_EXPORTS


class LIBCSV_API LibCSV
{
public:
	LibCSV(void);

private:

};

