int __fastcall sub_1055E4(int a1)
{
  int v1; // r12
  int result; // r0

  if ( !dword_47B240 )
    return sub_2A8A04(dword_47B260, dword_47B260, a1, a1 >> 31, 1);
  v1 = dword_47B248 + a1;
  result = dword_47B244 - a1;
  dword_47B248 = v1;
  dword_47B244 = result;
  return result;
}
