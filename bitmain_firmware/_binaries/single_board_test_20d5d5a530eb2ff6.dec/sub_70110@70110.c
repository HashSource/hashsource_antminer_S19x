int __fastcall sub_70110(_DWORD *a1)
{
  int result; // r0
  _DWORD *v2; // r4
  void *ptr; // [sp+4h] [bp-4h] BYREF

  if ( !a1 )
    return 501;
  result = sub_705CC(*a1);
  v2 = (_DWORD *)result;
  if ( result )
  {
    sub_708F0(*(_DWORD *)(result + 16), &ptr);
    free(ptr);
    sub_70938(v2[4]);
    sub_708F0(v2[5], &ptr);
    free(ptr);
    sub_70938(v2[5]);
    free(v2);
    return 0;
  }
  return result;
}
