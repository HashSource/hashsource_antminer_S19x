int __fastcall sub_258C1C(int a1)
{
  int v1; // r3
  __int64 v2; // r0

  v1 = a1;
  if ( a1 > 0 )
    sub_94700((int)"utils.c", 778, "virtual memory exhausted: can't allocate %ld bytes.", a1);
  v2 = sub_94700((int)"utils.c", 784, "virtual memory exhausted.", v1);
  return sub_258C58(v2, (void *)HIDWORD(v2));
}
