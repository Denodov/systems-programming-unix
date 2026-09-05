/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */
#ifndef UTILS_H
#define UTILS_H
#define COUNT_REPORT "levelCountReport.txt"

enum pest {aphid, whitefly, scale, caterpillar, beetle,
             cutworm, slug, gopher, raccoon, possum};
typedef enum pest pest_t;

void processFile(const char *filename);
void generateReport(void);

extern int level1Count;
extern int level2Count;
extern int level3Count;

#endif
