char *__fastcall sub_1EA5FC(int a1, int a2, int *a3)
{
  int v5; // r0
  int v6; // r0
  const char **v7; // r7
  char *result; // r0
  size_t v9; // r11
  _DWORD *v10; // r4
  int v11; // r3
  int v12; // r5
  char *v13; // r8
  char *v14; // r0
  int v15; // r0
  int v16; // r5
  char *v17; // r4
  char *v18; // r0
  int v19; // r0

  v5 = sub_16F654(a1);
  v6 = ((int (__fastcall *)(int))loc_1E2770)(v5);
  v7 = (const char **)dword_488C94;
  result = (char *)sub_1E2890(v6);
  v9 = (size_t)result;
  if ( a2 )
  {
    v10 = *(_DWORD **)(a2 + 28);
    v11 = 0;
    *(_DWORD *)(a2 + 120) = 0;
    for ( *(_QWORD *)(a2 + 152) = 0; v10; v10 = (_DWORD *)*v10 )
    {
      v12 = *(_DWORD *)(a2 + 144);
      if ( v12 )
      {
        v13 = (char *)*v7;
        v14 = sub_989F0(v10[13], 0, 0, v11);
        sub_93170(v13, v9, "qTP:%x:%s", v12, v14);
        v15 = sub_1E7DEC(*v7);
        result = sub_1E98E8(v15);
        if ( result )
        {
          v11 = (unsigned __int8)*result;
          if ( v11 == 86 )
            result = (char *)sub_24CE28(result + 1, a2, a3);
        }
      }
    }
  }
  else if ( a3 )
  {
    *((_QWORD *)a3 + 8) = 0;
    a3[14] = 0;
    v16 = *a3;
    v17 = (char *)*v7;
    v18 = sub_989F0(a3[2], a3[3], 0, 0);
    sub_93170(v17, v9, "qTP:%x:%s", v16, v18);
    v19 = sub_1E7DEC(*v7);
    result = sub_1E98E8(v19);
    if ( result )
    {
      if ( *result == 86 )
        return (char *)sub_24CE28(result + 1, 0, a3);
    }
  }
  return result;
}
