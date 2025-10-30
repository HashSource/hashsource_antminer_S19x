int __fastcall sub_7EF08(const char **a1, int a2)
{
  if ( a1 )
    return sub_89984(
             a2,
             "src/event.c",
             40,
             "---event[%p][%s,%s][%s(%ld),%s(%ld),%ld,%d][%p,%s][%ld,%ld][%ld,%ld][%d]---",
             a1,
             *a1,
             (const char *)a1 + 8,
             a1[68],
             a1[69],
             a1[70],
             a1[71],
             a1[72],
             a1[73],
             a1[74],
             a1[76],
             a1[79],
             a1[80],
             a1[95],
             a1[106],
             a1[94]);
  else
    return sub_89984(2, "src/event.c", 30, "a_event is null or 0");
}
