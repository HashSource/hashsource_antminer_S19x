int __fastcall sub_86F54(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r2
  int v4; // r3
  int v5; // r12
  int v6; // t1
  int v7; // r3
  int v8; // t1

  if ( a3 <= 0 )
    return 0;
  v3 = &a2[a3];
  while ( 1 )
  {
    v6 = *a1++;
    v5 = v6;
    v8 = *a2++;
    v7 = v8;
    if ( v5 == v8 )
    {
      if ( !v5 )
        return 0;
      goto LABEL_5;
    }
    v4 = *((unsigned __int8 *)&dword_B9164 + v5 + 8) - *((unsigned __int8 *)&dword_B9164 + v7 + 8);
    if ( v4 )
      return v4;
    if ( !v5 )
      return 0;
LABEL_5:
    if ( a2 == v3 )
      return 0;
  }
}
