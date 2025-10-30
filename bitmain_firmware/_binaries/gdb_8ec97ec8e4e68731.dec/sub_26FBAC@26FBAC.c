int __fastcall sub_26FBAC(char *s)
{
  int v2; // r1
  char *v3; // r12
  int v4; // r0
  unsigned int v5; // r3
  unsigned int v6; // r2
  int v7; // t1
  _DWORD *v8; // r4

  v2 = (unsigned __int8)*s;
  if ( *s )
  {
    v3 = s;
    v4 = 1;
    v5 = 0;
    do
    {
      v6 = v5 + v4 * v2;
      v7 = (unsigned __int8)*++v3;
      v2 = v7;
      ++v4;
      v5 = v6 % 0xE3;
    }
    while ( v7 );
    v2 = 4 * v5;
  }
  v8 = *(_DWORD **)(dword_48AA14 + v2);
  if ( !v8 )
LABEL_10:
    sub_946E0("Variable object not found");
  while ( sub_33CAA0(*v8 + 48, s) )
  {
    v8 = (_DWORD *)v8[1];
    if ( !v8 )
      goto LABEL_10;
  }
  return *v8;
}
