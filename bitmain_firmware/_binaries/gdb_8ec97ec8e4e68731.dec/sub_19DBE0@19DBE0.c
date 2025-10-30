int *__fastcall sub_19DBE0(int *a1, int *a2, int a3, int a4)
{
  int v4; // r6
  const char *v10; // [sp+0h] [bp-8h] BYREF
  int v11; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  v10 = (const char *)*a2;
  sub_19D334(&v11, &v10, a3, 0);
  if ( v11 )
  {
    *a2 += (int)&v10[-v4];
    if ( !((int (*)(void))loc_19DB3C)() )
    {
      *a1 = v11;
      return a1;
    }
    a4 = *(_DWORD *)(v11 + 12);
  }
  sub_19D99C(a1, a2, a3, a4);
  if ( v11 )
    ((void (__fastcall *)(int *))loc_19D154)(&v11);
  return a1;
}
