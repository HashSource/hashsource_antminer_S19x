int __fastcall sub_2DB6D8(int result)
{
  int v1; // r2
  int v2; // r3

  v1 = *(_DWORD *)(result + 160);
  v2 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(result + 4) + 444) + 12);
  *(_BYTE *)(v1 + 7) = v2;
  if ( !v2 && (*(_BYTE *)(v1 + 2341) & 0x1C) != 0 )
    *(_BYTE *)(v1 + 7) = 3;
  return result;
}
