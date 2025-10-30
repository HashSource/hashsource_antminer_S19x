int __fastcall sub_19C68(int result, unsigned __int8 *a2, int a3)
{
  unsigned int v3; // r5
  int v4; // r0
  unsigned __int8 *v5; // r2
  unsigned int v6; // r12
  int v7; // lr
  int v8; // t1
  int v9; // t1
  int v10; // [sp+0h] [bp-8h]

  if ( !a3 )
    result = 0;
  v10 = 256;
  if ( a3 )
  {
    v3 = 0;
    v4 = result - 1;
    v5 = &a2[a3];
    v6 = 0;
    do
    {
      v8 = *(unsigned __int8 *)++v4;
      v7 = v8;
      v9 = *a2++;
      v6 |= (v7 - v9) & v10;
      v3 |= (v9 - v7) & v10;
      v10 &= ~(v6 | v3);
    }
    while ( a2 != v5 );
    return (v3 >> 8) - (v6 >> 8);
  }
  return result;
}
