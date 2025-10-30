int __fastcall sub_302DC8(_DWORD *a1, int a2)
{
  int result; // r0
  bool v5; // cc
  int v6; // r3

  result = sub_302C04((int)a1);
  *(_BYTE *)(a2 + 4) = result;
  v5 = (unsigned __int8)result > 0x55u;
  if ( (unsigned __int8)result != 85 )
    v5 = (unsigned int)(unsigned __int8)result - 118 > 1;
  if ( v5 )
    v6 = a1[4];
  else
    v6 = 0;
  if ( v5 )
    v6 = *(_DWORD *)(v6 + 28) + a1[2];
  *(_DWORD *)a2 = v6;
  *(_DWORD *)(a2 + 8) = a1[1];
  return result;
}
