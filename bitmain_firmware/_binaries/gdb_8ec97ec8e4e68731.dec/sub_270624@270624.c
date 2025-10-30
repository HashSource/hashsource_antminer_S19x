int __fastcall sub_270624(int a1)
{
  _DWORD *v1; // r0
  int v2; // r0

  if ( *(_DWORD *)(a1 + 80) )
    v1 = (_DWORD *)sub_26BC70(*(_DWORD *)(a1 + 80));
  else
    v1 = *(_DWORD **)(a1 + 76);
  v2 = sub_171258(v1);
  if ( (unsigned int)**(unsigned __int8 **)(v2 + 24) - 18 <= 1 )
    v2 = sub_171598(v2);
  return sub_171258((_DWORD *)v2);
}
