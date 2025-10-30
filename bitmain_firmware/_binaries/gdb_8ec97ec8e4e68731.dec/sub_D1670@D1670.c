int __fastcall sub_D1670(int result)
{
  int v1; // r4

  if ( *(_DWORD *)(result + 112) != -1 )
  {
    v1 = result;
    result = sub_23E644(dword_4878EC, dword_4878F0, dword_4878F4);
    if ( result )
    {
      result = sub_23E578(dword_4878EC, dword_4878F0, dword_4878F4);
      *(_DWORD *)(v1 + 112) = result;
    }
    *(_DWORD *)(*(_DWORD *)(v1 + 28) + 48) = dword_487D2C;
  }
  return result;
}
