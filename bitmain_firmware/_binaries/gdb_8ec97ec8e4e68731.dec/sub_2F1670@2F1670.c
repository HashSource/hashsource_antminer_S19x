int __fastcall sub_2F1670(int a1, int a2)
{
  int v2; // r3
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r3

  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 140) + 136);
  v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 140) + 136);
  v4 = *(_DWORD *)(*(_DWORD *)(v2 + 60) + 28) + *(_DWORD *)(v2 + 56);
  v5 = *(_DWORD *)(*(_DWORD *)(v3 + 60) + 28) + *(_DWORD *)(v3 + 56);
  if ( v4 < v5 )
    return -1;
  else
    return v4 > v5;
}
