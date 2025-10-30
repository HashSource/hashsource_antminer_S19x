int __fastcall sub_2F8774(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // r0
  int v9; // r10
  unsigned __int64 v10; // r6
  int v11; // r3
  int v12; // r11
  unsigned __int8 *v13; // r5
  char *v14; // r11
  unsigned int v15; // r0
  _DWORD *v16; // r6
  int v17; // r7
  unsigned int v18; // r10
  char *v19; // r11
  int v20; // r2
  unsigned int v21; // r12
  unsigned int v22; // r1
  int v23; // r2
  int v24; // r0
  bool v25; // zf
  bool v26; // zf
  int v27; // r3
  int v28; // r11
  unsigned __int8 *v29; // r1
  int result; // r0
  _DWORD *v31; // r3
  _DWORD *v32; // r5
  _DWORD *v33; // r11
  bool v34; // zf
  bool v35; // zf
  char *v36; // r0
  void **v37; // r0
  int v38; // r2
  int v39; // r3
  int v40; // r11
  int v41; // r2
  char *ptr; // [sp+14h] [bp-20h]
  int v43; // [sp+1Ch] [bp-18h] BYREF
  unsigned int v44; // [sp+20h] [bp-14h] BYREF
  int v45; // [sp+24h] [bp-10h]
  int v46; // [sp+28h] [bp-Ch]

  v6 = *(_DWORD *)(a3 + 4);
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a3 + 8);
  if ( v6 == 16 )
  {
    if ( !v10 )
      goto LABEL_33;
    v27 = *(_DWORD *)(a1 + 84);
    v28 = *(_DWORD *)(v27 + 56);
    v29 = *(unsigned __int8 **)(v27 + 16);
    if ( (unsigned int)&v29[-v28] <= v10 )
      goto LABEL_33;
    v14 = (char *)(v28 + v10);
    if ( *(_DWORD *)(a1 + 48) > (unsigned int)v14
      || (v13 = *(unsigned __int8 **)(a1 + 60), v13 <= (unsigned __int8 *)v14) )
    {
      v31 = *(_DWORD **)(a1 + 4);
      if ( v31 )
      {
        while ( 1 )
        {
          if ( v31[12] <= (unsigned int)v14 )
          {
            v13 = (unsigned __int8 *)v31[15];
            if ( v13 > (unsigned __int8 *)v14 )
              break;
          }
          v31 = (_DWORD *)v31[1];
          if ( !v31 )
            goto LABEL_42;
        }
      }
      else
      {
LABEL_42:
        v31 = *(_DWORD **)a1;
        if ( !*(_DWORD *)a1 )
        {
LABEL_46:
          v13 = v29;
          goto LABEL_6;
        }
        while ( 1 )
        {
          if ( v31[12] <= (unsigned int)v14 )
          {
            v13 = (unsigned __int8 *)v31[15];
            if ( v13 > (unsigned __int8 *)v14 )
              break;
          }
          v31 = (_DWORD *)*v31;
          if ( !v31 )
            goto LABEL_46;
        }
      }
      a1 = (int)v31;
    }
LABEL_6:
    v15 = sub_2ABC24(v9, v14, &v43, 0, (unsigned int)v13);
    if ( v15 )
    {
      v16 = *(_DWORD **)(*(_DWORD *)(a1 + 28) + 4 * (v15 % 0x79));
      if ( !v16 )
      {
LABEL_54:
        sub_2A6A5C("Dwarf Error: Could not find abbrev number %u.", v15);
        ((void (__fastcall *)(int))loc_2A6C48)(17);
        return 0;
      }
      while ( v15 != *v16 )
      {
        v16 = (_DWORD *)v16[5];
        if ( !v16 )
          goto LABEL_54;
      }
      v17 = v16[3];
      if ( v17 )
      {
        v17 = 0;
        v18 = 0;
        v19 = &v14[v43];
        do
        {
          v20 = v16[4];
          v21 = *(_DWORD *)(v20 + 12 * v18);
          v22 = *(_DWORD *)(v20 + 12 * v18 + 4);
          v23 = *(_DWORD *)(v20 + 12 * v18 + 8);
          v44 = v21;
          v24 = sub_2F68C8(&v44, v22, v23, a1, v19, v13);
          v19 = (char *)v24;
          if ( !v24 )
            break;
          if ( a2 == v24 )
          {
            sub_2A6A5C("Dwarf Error: Abstract instance recursion detected.");
            ((void (__fastcall *)(int))loc_2A6C48)(17);
            return 0;
          }
          if ( v44 == 71 )
          {
            result = sub_2F8774(a1, v24, &v44, a4, a5);
            if ( !result )
              return result;
          }
          else if ( v44 <= 0x47 )
          {
            if ( v44 == 3 && !v17 )
            {
              v34 = v45 == 14;
              if ( v45 != 14 )
                v34 = v45 == 8;
              if ( v34 )
                goto LABEL_76;
              v35 = v45 == 7969;
              if ( v45 != 7969 )
                v35 = v45 == 31;
              if ( v35 )
              {
LABEL_76:
                v17 = v46;
                switch ( *(_DWORD *)(a1 + 32) )
                {
                  case 1:
                  case 2:
                  case 3:
                  case 5:
                  case 6:
                  case 7:
                  case 9:
                  case 0xC:
                  case 0xD:
                  case 0xF:
                  case 0x12:
                  case 0x1D:
                    goto LABEL_30;
                  default:
                    break;
                }
              }
            }
          }
          else if ( v44 == 110 || v44 == 8199 )
          {
            v25 = v45 == 14;
            if ( v45 != 14 )
              v25 = v45 == 8;
            if ( v25 )
              goto LABEL_29;
            v26 = v45 == 7969;
            if ( v45 != 7969 )
              v26 = v45 == 31;
            if ( v26 )
            {
LABEL_29:
              v17 = v46;
LABEL_30:
              *a5 = 1;
            }
          }
          ++v18;
        }
        while ( v16[3] > v18 );
      }
    }
    else
    {
      v17 = 0;
    }
    *a4 = v17;
    return 1;
  }
  v11 = 7968;
  if ( v6 != 7968 )
  {
    if ( v10 )
    {
      v12 = *(_DWORD *)(a1 + 48);
      v13 = *(unsigned __int8 **)(a1 + 60);
      if ( (unsigned int)&v13[-v12] > v10 )
      {
        v14 = (char *)(v12 + v10);
        goto LABEL_6;
      }
    }
LABEL_33:
    sub_2A6A5C("Dwarf Error: Invalid abstract instance DIE ref.");
    ((void (__fastcall *)(int))loc_2A6C48)(17);
    return 0;
  }
  v32 = *(_DWORD **)(a1 + 84);
  v33 = (_DWORD *)v32[9];
  if ( v33 )
    goto LABEL_50;
  v36 = sub_2AD3B0(*(const char ***)(a1 + 8), "/usr/lib/debug");
  ptr = v36;
  if ( !v36 )
    goto LABEL_73;
  v37 = sub_2AC764((int)v36, 0);
  v40 = (int)v37;
  if ( !v37 )
  {
LABEL_72:
    free(ptr);
    goto LABEL_73;
  }
  if ( !sub_2AA86C((int)v37, 1, v38, v39) )
  {
    sub_2AC9DC(v40);
    goto LABEL_72;
  }
  v41 = *(_DWORD *)(a1 + 84);
  v32[9] = v40;
  v33 = *(_DWORD **)(v41 + 36);
LABEL_50:
  if ( sub_2F5C18(v33, (const char **)(v32[2] + 32), 0, v11, v10, v32 + 12, v32 + 13) )
  {
    if ( v10 < (unsigned int)v32[13] )
    {
      v14 = (char *)(v32[12] + v10);
      if ( v14 )
      {
        v13 = (unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(a1 + 84) + 48) + *(_DWORD *)(*(_DWORD *)(a1 + 84) + 52));
        goto LABEL_6;
      }
    }
  }
LABEL_73:
  sub_2A6A5C("Dwarf Error: Unable to read alt ref %llu.", v10);
  ((void (__fastcall *)(int))loc_2A6C48)(17);
  return 0;
}
