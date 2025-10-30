int __fastcall sub_893AC(int a1, int a2)
{
  int v4; // r1
  int v5; // r12
  int v6; // r0
  int v7; // r2
  char v8; // r3
  int v9; // t1
  char v10; // r4

  v4 = sub_93028(a2 + 1);
  if ( a2 >= 0 )
  {
    v5 = a1 - 1;
    v6 = a1 + a2;
    v7 = v4;
    do
    {
      v9 = *(unsigned __int8 *)++v5;
      v8 = v9;
      ++v7;
      v10 = v9 - 32;
      if ( (unsigned int)(v9 - 97) > 0x19 )
        *(_BYTE *)(v7 - 1) = v8;
      else
        *(_BYTE *)(v7 - 1) = v10;
    }
    while ( v6 != v5 );
  }
  *(_BYTE *)(v4 + a2) = 0;
  return v4;
}
