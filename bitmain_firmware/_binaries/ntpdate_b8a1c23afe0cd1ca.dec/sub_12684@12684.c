bool __fastcall sub_12684(_DWORD *a1)
{
  if ( *a1 == 2 )
    return (a1[1] & 0xF0) == 224;
  if ( *a1 == 10 )
    return *((unsigned __int8 *)a1 + 4) == 255;
  return 0;
}
