int __fastcall sub_2D87CC(_DWORD *a1, _BYTE *a2)
{
  unsigned __int8 *v2; // lr
  int v3; // r4
  int v4; // r12
  int v5; // r3
  _DWORD *v7; // r2
  int v8; // lr

  v2 = *(unsigned __int8 **)(*(_DWORD *)(a1[1] + 444) + 392);
  v3 = *v2;
  if ( (*a2 & 3) == 2 )
    return *v2;
  v4 = *(_DWORD *)(a1[40] + 2348);
  v5 = *(_DWORD *)(v4 + 28);
  if ( v5 == -1 )
  {
    v7 = *(_DWORD **)v4;
    if ( !*(_DWORD *)v4 )
      goto LABEL_8;
    v8 = v2[1];
    v5 = 0;
    do
    {
      v7 = (_DWORD *)*v7;
      v5 += v8;
    }
    while ( v7 );
    if ( !v5 )
    {
LABEL_8:
      v5 = sub_2CBE24(a1, (int)a2);
      v4 = *(_DWORD *)(a1[40] + 2348);
    }
  }
  *(_DWORD *)(v4 + 28) = v5;
  return v3 + v5;
}
