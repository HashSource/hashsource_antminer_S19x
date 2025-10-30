int __fastcall sub_2A7A64(int result, int a2)
{
  int v2; // r3

  if ( (*(_BYTE *)(result + 40) & 7) == 1 )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(result + 4) + 4);
    if ( v2 == 3 )
    {
      *(_DWORD *)(*(_DWORD *)(result + 160) + 28) = a2;
    }
    else if ( v2 == 5 )
    {
      *(_DWORD *)(*(_DWORD *)(result + 160) + 528) = a2;
    }
  }
  return result;
}
