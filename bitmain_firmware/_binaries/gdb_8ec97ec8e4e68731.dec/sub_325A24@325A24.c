int __fastcall sub_325A24(int *a1, int a2, char *dest)
{
  const void *v6; // r1
  int result; // r0
  int v8; // r0
  int v9; // [sp+0h] [bp-8h] BYREF
  _BYTE v10[4]; // [sp+4h] [bp-4h] BYREF

  if ( a1[9] || (result = sub_324F30(a1, 0, (int)&v9, (int)v10)) != 0 )
  {
    v6 = (const void *)a1[10];
    if ( v6 )
    {
      v8 = a1[7];
      if ( v8 < a2 )
      {
        memset(&dest[16 * v8], 0, 16 * (a2 - v8));
        a2 = a1[7];
        v6 = (const void *)a1[10];
      }
      memcpy(dest, v6, 16 * a2);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
