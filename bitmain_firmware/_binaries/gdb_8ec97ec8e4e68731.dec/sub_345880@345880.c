_DWORD *__fastcall sub_345880(int a1, int a2, int a3)
{
  size_t *v4; // r0
  size_t v5; // r2
  size_t *v6; // r5
  _DWORD *v7; // r3
  _DWORD *v9; // r0

  v4 = sub_344DB4(*(_DWORD *)a1 + a3, *(_DWORD *)(a1 + 4));
  v5 = *(_DWORD *)a1;
  v6 = v4;
  v7 = v4 + 3;
  if ( *(_DWORD *)a1 )
  {
    if ( v5 == 1 )
    {
      *((_BYTE *)v4 + 12) = *(_BYTE *)(a1 + 12);
      v5 = *(_DWORD *)a1;
    }
    else
    {
      v9 = memcpy(v4 + 3, (const void *)(a1 + 12), v5);
      v5 = *(_DWORD *)a1;
      v7 = v9;
    }
  }
  if ( v6 != (size_t *)&std::string::_Rep::_S_empty_rep_storage )
  {
    *v6 = v5;
    v6[2] = 0;
    *((_BYTE *)v6 + v5 + 12) = 0;
  }
  return v7;
}
