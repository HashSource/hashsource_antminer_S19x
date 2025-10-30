int __fastcall sub_303A64(int a1, int *a2, int a3, int a4, int a5)
{
  int v6; // r7
  int v10; // r6
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r0
  int v16; // [sp+0h] [bp-38h] BYREF
  int i; // [sp+4h] [bp-34h]
  int v18; // [sp+Ch] [bp-2Ch]
  int v19; // [sp+10h] [bp-28h]
  int v20; // [sp+14h] [bp-24h]
  int v21; // [sp+20h] [bp-18h]
  int v22; // [sp+24h] [bp-14h]
  int v23; // [sp+28h] [bp-10h]

  v6 = *a2;
  *a2 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v10 = sub_306F94(&v16, a5, "1.2.11", 56);
  if ( !v10 )
  {
    v11 = 0;
    v18 = a1;
    v12 = 0;
    v19 = 0;
    v16 = a3;
    for ( i = 0; ; v11 = i )
    {
      v13 = 4;
      if ( !v12 )
      {
        v19 = v6;
        v6 = 0;
      }
      if ( v11 )
      {
        v13 = a4 ? 0 : 4;
      }
      else
      {
        i = a4;
        a4 = 0;
      }
      v14 = sub_3058C4(&v16, v13);
      if ( v14 )
        break;
      v12 = v19;
    }
    if ( v14 != 1 )
      v10 = v14;
    *a2 = v20;
    sub_306BE8(&v16);
  }
  return v10;
}
