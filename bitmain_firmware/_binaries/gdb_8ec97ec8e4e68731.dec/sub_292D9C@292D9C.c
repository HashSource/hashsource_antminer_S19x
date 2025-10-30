int __fastcall sub_292D9C(char a1)
{
  int v1; // r3
  int v2; // r3
  int v3; // r1

  if ( dword_48B708 > dword_48B704 )
    v1 = dword_48B708 - dword_48B704;
  else
    v1 = dword_48B704 - dword_48B708;
  if ( dword_48B708 > dword_48B704 )
    v2 = v1 - 1;
  else
    v2 = 508 - v1;
  if ( dword_48B708 <= dword_48B704 )
    v2 += 3;
  if ( v2 )
  {
    v3 = dword_48B708 - 1;
    if ( dword_48B708 - 1 >= 0 )
      --dword_48B708;
    else
      v2 = 511;
    if ( v3 < 0 )
    {
      v3 = v2;
      dword_48B708 = v2;
    }
    v2 = 1;
    *((_BYTE *)&dword_48B704 + v3 + 8) = a1;
  }
  return v2;
}
