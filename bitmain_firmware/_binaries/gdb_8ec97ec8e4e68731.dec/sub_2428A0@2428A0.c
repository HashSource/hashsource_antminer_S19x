int __fastcall sub_2428A0(const char *a1, int a2, int a3, int a4)
{
  const char *v7; // r0
  int v8; // [sp+0h] [bp-48h] BYREF
  int v9; // [sp+4h] [bp-44h] BYREF
  int v10; // [sp+8h] [bp-40h] BYREF
  unsigned int v11; // [sp+Ch] [bp-3Ch] BYREF
  const char *v12; // [sp+10h] [bp-38h]
  const char *v13; // [sp+18h] [bp-30h]
  int v14; // [sp+2Ch] [bp-1Ch]
  char v15; // [sp+30h] [bp-18h]
  int v16; // [sp+34h] [bp-14h]

  if ( !a1 || !*a1 )
    return 1;
  v12 = a1;
  v16 = a2;
  v11 = 0;
  v14 = 0;
  v15 = 0;
  while ( !((int (__fastcall *)(unsigned int *))loc_2424A8)(&v11) )
  {
    if ( !sub_2425E0((int)&v11, &v8, &v9, &v10) )
    {
      if ( v11 )
      {
        if ( v11 > 2 )
          sub_2422F0();
        v7 = v13;
      }
      else
      {
        v7 = v12;
      }
      sub_242324(v7);
    }
    if ( v8 == a3 && v9 <= a4 && v10 >= a4 )
      return 1;
  }
  return 0;
}
