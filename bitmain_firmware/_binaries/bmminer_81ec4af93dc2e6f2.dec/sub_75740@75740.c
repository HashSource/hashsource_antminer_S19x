int __fastcall sub_75740(int a1, int a2, int a3, int a4)
{
  char v4; // r12
  bool v5; // zf

  v5 = a4 == 0;
  if ( a4 )
    v4 = 0;
  else
    LOBYTE(a4) = 1;
  if ( !v5 )
    LOBYTE(a4) = v4;
  return sub_751F0(a1, a2, a3, 60, (unsigned __int8)a4 | 0x80008700);
}
