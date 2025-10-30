int __fastcall sub_22A9C(int a1)
{
  int v3; // r1
  int v4; // r0
  char *v5; // r3
  int v6; // t1

  if ( dword_B32C0 != 2 )
    return dword_B3DE4[a1 + 4];
  if ( !sub_2740C() )
    return dword_B3DE4[a1];
  v3 = sub_26A44();
  if ( v3 <= 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = 0;
    v5 = (char *)&unk_533B44 + 1024 * a1 - 4;
    do
    {
      v6 = *((_DWORD *)v5 + 1);
      v5 += 4;
      v4 += v6;
    }
    while ( v5 != (char *)&unk_533B44 + 1024 * a1 + 4 * v3 + -4 );
  }
  return sub_8F588(v4, v3);
}
