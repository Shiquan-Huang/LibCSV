#ifdef LIBCSV_EXPORTS
#define LIBCSV_API __declspec(dllexport)
#else
#define LIBCSV_API __declspec(dllimport)
#endif // LIBCSV_EXPORTS

#include <string>
#include <vector>
#include <list>
#include <fstream>

using namespace std;

class LIBCSV_API LibCSV
{
public:

	int load_csv(const std::string& csv_path);

	int row_count();

	int col_count();

	const string& get_element(const int& row, const int& col);

	int add_row(const std::vector<std::string>& row_ctx);

	int remove_row(const int& row);

	int replace_row(const int& row, const std::vector<std::string>& row_ctx);

	int update_element(const int& row, const int& col, const std::string& new_element);

private:

	std::ifstream csv_file;
};

