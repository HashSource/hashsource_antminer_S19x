int __fastcall sub_100C40(char *a1)
{
  void *v1; // r4
  int v2; // r1
  int v3; // r5
  void *ptr; // [sp+4h] [bp-10h] BYREF
  void *v6; // [sp+8h] [bp-Ch] BYREF
  _DWORD v7[2]; // [sp+Ch] [bp-8h] BYREF

  ptr = 0;
  v6 = 0;
  sub_100B4C(v7, a1, (int)&ptr, &v6);
  v1 = (void *)v7[0];
  if ( !v7[0] )
    return 0;
  v2 = sub_FE5FC(*(_DWORD **)(v7[0] + 4));
  if ( v2 )
  {
    sub_7F564(v7, v2, 10);
    v3 = v7[0];
  }
  else
  {
    v3 = 0;
  }
  if ( ptr )
    free(ptr);
  if ( v6 )
    free(v6);
  sub_7F5D0((int)v1);
  sub_33AC04(v1);
  return v3;
}
