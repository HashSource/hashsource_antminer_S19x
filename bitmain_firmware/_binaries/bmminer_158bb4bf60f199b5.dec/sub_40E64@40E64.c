void __fastcall sub_40E64(unsigned int *a1, int a2, char *a3, int a4)
{
  char *v7; // r7
  int *v8; // r7
  char *v9; // r4
  char *s; // [sp+Ch] [bp-Ch] BYREF
  int v11; // [sp+10h] [bp-8h] BYREF
  int v12; // [sp+14h] [bp-4h] BYREF

  if ( a3 && *a3 )
  {
    if ( sub_3E02C((unsigned __int8 *)a3, &s, &v11, &v12) )
    {
      v8 = (int *)sub_58548();
      sub_52D98(v8, s);
      sub_62ECC((int)v8, 1, s, v11, v12);
      v9 = (char *)sub_3C89C(s, a4);
      sub_3F65C(a1, 55, *v8, (int)v9, a4);
      if ( s != v9 )
        free(v9);
    }
    else
    {
      v7 = (char *)sub_3C89C(a3, a4);
      sub_3F65C(a1, 53, 0, (int)v7, a4);
      if ( a3 != v7 )
        free(v7);
    }
  }
  else
  {
    sub_3F65C(a1, 52, 0, 0, a4);
  }
}
