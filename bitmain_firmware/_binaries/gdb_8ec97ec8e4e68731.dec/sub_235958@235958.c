int __fastcall sub_235958(int a1, int a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  int result; // r0
  _DWORD *v7; // r0

  v3 = *(_DWORD **)(a2 + 164);
  if ( v3 )
  {
    v4 = *(_DWORD **)(a1 + 164);
    if ( v4 )
      goto LABEL_3;
  }
  else
  {
    v7 = sub_93094(1u, 0xCu);
    *(_DWORD *)(a2 + 164) = v7;
    v3 = v7;
    v4 = *(_DWORD **)(a1 + 164);
    if ( v4 )
      goto LABEL_3;
  }
  v4 = sub_93094(1u, 0xCu);
  *(_DWORD *)(a1 + 164) = v4;
LABEL_3:
  result = v3[2];
  *(_QWORD *)v4 = *(_QWORD *)v3;
  if ( result )
    result = sub_327254(result);
  v4[2] = result;
  return result;
}
