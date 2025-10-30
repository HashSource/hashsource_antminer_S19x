int __fastcall sub_298058(int result, int *a2, char a3)
{
  int v3; // lr
  int v4; // r3
  bool v5; // zf
  int v6; // r12
  int v7; // r4
  char v8; // r2
  bool v9; // zf
  int v10; // r3

  v3 = *a2;
  v4 = *(unsigned __int8 *)(result + *a2);
  v5 = v4 == 0;
  if ( *(_BYTE *)(result + *a2) )
    v5 = v4 == 39;
  if ( v5 )
  {
    v6 = *a2;
  }
  else
  {
    v7 = *a2;
    v8 = a3 & 1;
    do
    {
      if ( v4 == 92 )
        v10 = v8 & 1;
      else
        v10 = 0;
      v6 = v3 + 1;
      if ( v10 && *(_BYTE *)(result + v7 + 1) )
        v6 = v3 + 2;
      v4 = *(unsigned __int8 *)(result + v6);
      v7 = v6;
      v3 = v6;
      v9 = v4 == 0;
      if ( *(_BYTE *)(result + v6) )
        v9 = v4 == 39;
    }
    while ( !v9 );
  }
  *a2 = v6;
  return result;
}
