int __fastcall sub_611EC(_DWORD *a1, char *a2, int a3)
{
  size_t v4; // r0
  size_t v9; // [sp+14h] [bp-18h]
  int v10; // [sp+18h] [bp-14h]
  int v11; // [sp+18h] [bp-14h]
  int *v12; // [sp+1Ch] [bp-10h]
  int v13; // [sp+24h] [bp-8h]

  if ( !(*a1 >> a1[2]) || !sub_60F24(a1) )
  {
    v4 = strlen(a2);
    v13 = sub_5FB98((unsigned __int8 *)a2, v4, dword_90C48);
    v12 = (int *)(a1[1] + 8 * (((1 << a1[2]) - 1) & v13));
    v10 = sub_60C80((int)a1, v12, a2, v13);
    if ( v10 )
    {
      sub_5FB30(*(_DWORD *)(v10 + 20));
      *(_DWORD *)(v10 + 20) = a3;
    }
    else
    {
      v9 = strlen(a2);
      if ( v9 > 0xFFFFFFE6 )
        return -1;
      v11 = sub_64070(v9 + 25);
      if ( !v11 )
        return -1;
      *(_DWORD *)(v11 + 16) = v13;
      strncpy((char *)(v11 + 24), a2, v9 + 1);
      *(_DWORD *)(v11 + 20) = a3;
      sub_60AB4((_DWORD *)v11);
      sub_60AB4((_DWORD *)(v11 + 8));
      sub_60BF0((int)a1, v12, (_DWORD *)v11);
      sub_60AEC((int)(a1 + 5), (_DWORD *)(v11 + 8));
      ++*a1;
    }
    return 0;
  }
  return -1;
}
