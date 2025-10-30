int __fastcall sub_8D634(const void **a1, int a2)
{
  return sub_8CD10(
           a2,
           "src/buf.c",
           74,
           "---buf[%p][%ld-%ld][%ld][%s][%p:%ld]---",
           a1,
           a1[4],
           a1[5],
           a1[6],
           (const char *)a1 + 28,
           *a1,
           (_BYTE *)a1[1] - (_BYTE *)*a1);
}
