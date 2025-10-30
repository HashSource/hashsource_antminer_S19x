int __fastcall sub_2FE080(int a1, int a2)
{
  int v2; // r3
  int result; // r0
  _DWORD *v6; // r5
  unsigned int v7; // r8
  char *s2; // r1
  int v9; // r0
  int v10; // r2
  int v11; // r2
  char *v12; // r3
  _DWORD *v13; // r4
  int v14; // r3
  int v15; // lr
  int v16; // r2
  int v17; // r0
  int v18; // r0
  int v19; // r1
  int v20; // r1
  char *v21; // [sp+1Ch] [bp-8h] BYREF

  v2 = *(_BYTE *)(a1 + 40) & 7;
  if ( v2 == 1 )
  {
    result = sub_2FCD78((_DWORD *)a1);
    if ( !result )
      return result;
    v6 = *(_DWORD **)(a1 + 120);
    v7 = (unsigned int)&v6[*(_DWORD *)(a1 + 124)];
    if ( (unsigned int)v6 >= v7 )
      return 1;
    while ( 1 )
    {
      v13 = (_DWORD *)*v6;
      v14 = *(_DWORD *)(*v6 + 12);
      v15 = *(_DWORD *)(*v6 + 16);
      if ( (v14 & 0x3882) != 0 )
        goto LABEL_27;
      if ( (char **)v15 != &off_4708A8 )
        break;
      s2 = (char *)v13[1];
      if ( (v14 & 0x2000) != 0 )
      {
        v10 = v13[1];
LABEL_28:
        if ( v7 > (unsigned int)(v6 + 1) )
        {
          v17 = v6[1];
          ++v6;
          s2 = *(char **)(v17 + 4);
        }
        else
        {
          s2 = (char *)v10;
        }
        goto LABEL_15;
      }
LABEL_12:
      if ( (v14 & 0x1000) != 0 && v7 > (unsigned int)(v6 + 1) )
      {
        v9 = v6[1];
        ++v6;
        v10 = *(_DWORD *)(v9 + 4);
      }
      else
      {
        v10 = (int)s2;
      }
LABEL_15:
      v21 = 0;
      result = sub_2FD6C4(a2, a1, v10, v14, v15, v13[2], s2, 0, 0, &v21);
      if ( !result )
        return result;
      v11 = v13[3];
      v12 = v21;
      if ( (v11 & 0x800) != 0 && (!v21 || !v21[12]) )
      {
        v13[5] = 0;
        goto LABEL_21;
      }
      if ( *(_DWORD *)(*(_DWORD *)(a2 + 48) + 4) == *(_DWORD *)(a1 + 4) )
      {
        v18 = *((_DWORD *)v21 + 8);
        v19 = v13[4];
        if ( !v18 )
        {
          v20 = *(_DWORD *)(v19 + 20);
          *((_DWORD *)v21 + 8) = v13;
          if ( (v20 & 0x1000) == 0 )
            goto LABEL_20;
          goto LABEL_37;
        }
        if ( (char **)v19 != &off_4708A8 )
        {
          if ( (*(_DWORD *)(v19 + 20) & 0x1000) != 0 )
          {
            if ( *(char ***)(v18 + 16) == &off_4708A8 )
            {
              *((_DWORD *)v21 + 8) = v13;
LABEL_37:
              v13[3] = v11 | 0x200;
            }
          }
          else
          {
            *((_DWORD *)v21 + 8) = v13;
          }
        }
      }
LABEL_20:
      v13[5] = v12;
LABEL_21:
      if ( v7 <= (unsigned int)++v6 )
        return 1;
    }
    v16 = (*(_DWORD *)(v15 + 20) >> 12) & 1;
    if ( (char **)v15 == &off_4709F8 )
      v16 = 1;
    if ( !v16 )
      goto LABEL_21;
LABEL_27:
    v10 = v13[1];
    if ( (v14 & 0x2000) != 0 || (char **)v15 == &off_4709F8 )
      goto LABEL_28;
    s2 = (char *)v13[1];
    goto LABEL_12;
  }
  if ( v2 == 2 )
    return sub_2FD410(a1, a2, (int (__fastcall *)(int, int, char *, _DWORD, int *))sub_2FCE00);
  ((void (__fastcall *)(int))loc_2A6C48)(3);
  return 0;
}
