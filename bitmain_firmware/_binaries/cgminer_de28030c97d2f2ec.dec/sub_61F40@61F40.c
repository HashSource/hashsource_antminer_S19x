int __fastcall sub_61F40(_DWORD *a1, char *a2, int a3)
{
  size_t v4; // r0
  size_t v9; // [sp+14h] [bp-18h]
  int v10; // [sp+18h] [bp-14h]
  int v11; // [sp+18h] [bp-14h]
  int *v12; // [sp+1Ch] [bp-10h]
  int v13; // [sp+24h] [bp-8h]

  if ( !(*a1 >> a1[2]) || !sub_61C70(a1) )
  {
    v4 = strlen(a2);
    v13 = sub_608E8((unsigned __int8 *)a2, v4, dword_91DE0);
    v12 = (int *)(a1[1] + 8 * (v13 & ((1 << a1[2]) - 1)));
    v10 = sub_619C8((int)a1, v12, a2, v13);
    if ( v10 )
    {
      sub_60884(*(_DWORD *)(v10 + 20));
      *(_DWORD *)(v10 + 20) = a3;
    }
    else
    {
      v9 = strlen(a2);
      if ( v9 > 0xFFFFFFE6 )
        return -1;
      v11 = sub_64DA4(v9 + 25);
      if ( !v11 )
        return -1;
      *(_DWORD *)(v11 + 16) = v13;
      strncpy((char *)(v11 + 24), a2, v9 + 1);
      *(_DWORD *)(v11 + 20) = a3;
      sub_6180C((_DWORD *)v11);
      sub_6180C((_DWORD *)(v11 + 8));
      sub_6193C((int)a1, v12, (_DWORD *)v11);
      sub_61840((int)(a1 + 5), (_DWORD *)(v11 + 8));
      ++*a1;
    }
    return 0;
  }
  return -1;
}
