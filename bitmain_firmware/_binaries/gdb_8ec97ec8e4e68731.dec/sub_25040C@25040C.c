void __fastcall sub_25040C(int a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  _DWORD *v4; // r2
  int v5; // r3
  int v6; // r5
  int v7; // r4
  int v8; // r0

  v2 = *(_DWORD **)(a1 + 4);
  if ( v2 == *(_DWORD **)(a1 + 8) )
  {
    sub_C5504((void **)a1, *(char **)(a1 + 4), a2);
  }
  else if ( v2 )
  {
    *v2 = v2 + 2;
    v4 = a2 + 2;
    if ( (_DWORD *)*a2 == a2 + 2 )
    {
      v6 = a2[3];
      v7 = a2[4];
      v8 = a2[5];
      v2[2] = *v4;
      v2[3] = v6;
      v2[4] = v7;
      v2[5] = v8;
    }
    else
    {
      *v2 = *a2;
      v2[2] = a2[2];
    }
    v2[1] = a2[1];
    *((_BYTE *)a2 + 8) = 0;
    v5 = *(_DWORD *)(a1 + 4);
    *a2 = v4;
    a2[1] = 0;
    *(_DWORD *)(a1 + 4) = v5 + 24;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 24;
  }
}
