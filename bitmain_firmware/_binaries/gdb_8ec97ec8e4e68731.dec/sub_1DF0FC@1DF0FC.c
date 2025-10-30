int __fastcall sub_1DF0FC(int **a1, int a2, int a3)
{
  void *v3; // r10
  int **v4; // r6
  int v7; // r7
  int v8; // r8
  int v9; // r4
  int result; // r0
  int v11; // r4
  int v12; // r11
  char *v13; // r0
  char *v14; // r2
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int *v18; // r2
  int v19; // r0
  const char *v20; // r8
  int v21; // r0
  int *v22; // r3
  int v23; // r2
  int v24; // r8
  int v25; // r1
  int v26; // r0
  int v27; // r0
  int v28; // r3
  _BYTE *v29; // r3
  int v30; // r2
  int v31; // r8
  __int16 *v32; // r6
  int v33; // r0
  __int16 *v34; // r2
  __int64 v35; // r2
  int v36; // r8
  int v37; // r0
  int v38; // r0
  void *v39; // r0
  int v40; // [sp+Ch] [bp-50h]
  int v41; // [sp+14h] [bp-48h]
  int v42; // [sp+18h] [bp-44h]
  int v43; // [sp+20h] [bp-3Ch]
  int v44; // [sp+20h] [bp-3Ch]
  int v45; // [sp+24h] [bp-38h]
  int **v46; // [sp+24h] [bp-38h]
  void *ptr; // [sp+28h] [bp-34h] BYREF
  int v48; // [sp+2Ch] [bp-30h]
  _DWORD v49[4]; // [sp+30h] [bp-2Ch] BYREF
  void *v50; // [sp+40h] [bp-1Ch] BYREF
  int v51; // [sp+44h] [bp-18h]
  _DWORD v52[5]; // [sp+48h] [bp-14h] BYREF

  v4 = a1;
  v7 = **a1;
  v8 = (*a1)[2];
  v9 = ((int (__fastcall *)(int))loc_166E9C)(v7);
  result = v9 + ((int (__fastcall *)(int))loc_166F48)(v7);
  if ( v8 != result )
  {
    sub_94700(
      (int)"regcache.c",
      1336,
      "%s: Assertion `%s' failed.",
      "void regcache::dump(ui_file*, regcache_dump_what)",
      "m_descr->nr_cooked_registers == (gdbarch_num_regs (gdbarch) + gdbarch_num_pseudo_regs (gdbarch))");
    v39 = ptr;
    if ( ptr != v3 )
      sub_339E64(ptr);
    sub_338FFC(v39);
  }
  if ( (*v4)[2] >= 0 )
  {
    v11 = -1;
    v12 = 0;
    v42 = 0;
    v40 = 0;
    v41 = 0;
    while ( 1 )
    {
      if ( v11 == -1 )
      {
        sub_2594B0(a2, " %-10s", "Name");
        v20 = "Type";
        sub_2594B0(a2, " %4s", "Nr");
        sub_2594B0(a2, " %4s", "Rel");
        sub_2594B0(a2, " %6s  ", "Offset");
        sub_2594B0(a2, " %5s ", "Size");
        ptr = v49;
        v48 = 0;
        LOBYTE(v49[0]) = 0;
        goto LABEL_17;
      }
      v13 = (char *)((int (__fastcall *)(int, int))loc_1677C0)(v7, v11);
      v14 = v13;
      if ( v13 )
      {
        if ( !*v13 )
          v14 = "''";
      }
      else
      {
        v14 = "";
      }
      sub_2594B0(a2, " %-10s", v14);
      sub_2594B0(a2, " %4d", v11);
      if ( ((int (__fastcall *)(int))loc_166E9C)(v7) <= v11 )
      {
        v27 = ((int (__fastcall *)(int))loc_166E9C)(v7);
        sub_2594B0(a2, " %4d", v11 - v27);
      }
      else
      {
        sub_2594B0(a2, " %4d", v11);
      }
      sub_2594B0(a2, " %6ld", *(_DWORD *)((*v4)[4] + 4 * v11));
      v15 = (*v4)[4];
      if ( *(_DWORD *)(v15 + 4 * v11) == v12
        && (!v11 || *(_DWORD *)((*v4)[5] + 4 * v11 - 4) + *(_DWORD *)(v15 + 4 * v11 - 4) == v12) )
      {
        sub_2594B0(a2, "  ");
      }
      else
      {
        v16 = v40;
        if ( !v40 )
        {
          v16 = v41 + 1;
          v40 = ++v41;
        }
        sub_2594B0(a2, "*%d", v40, v16);
      }
      v17 = *(_DWORD *)((*v4)[5] + 4 * v11);
      v12 = v17 + *(_DWORD *)((*v4)[4] + 4 * v11);
      sub_2594B0(a2, " %5ld", v17);
      v18 = *v4;
      LOBYTE(v49[0]) = 0;
      ptr = v49;
      v19 = *v18;
      v48 = 0;
      v20 = *(const char **)(*(_DWORD *)(((int (__fastcall *)(int, int))loc_1DD3B4)(v19, v11) + 24) + 8);
      if ( !v20 )
        break;
LABEL_15:
      if ( !strncmp(v20, "builtin_type", 0xCu) )
        v20 += 12;
LABEL_17:
      sub_2594B0(a2, " %-15s", v20);
      if ( ptr != v49 )
        sub_339E64(ptr);
      sub_2594B0(a2, (const char *)&word_3E1F84);
      switch ( a3 )
      {
        case 1:
          if ( v11 == -1 )
          {
            sub_2594B0(a2, "Raw value");
          }
          else if ( ((int (__fastcall *)(int))loc_166E9C)(**v4) > v11 )
          {
            if ( !((int (__fastcall *)(int **, int))loc_1DD834)(v4, v11) )
            {
LABEL_28:
              sub_2594B0(a2, "<invalid>");
LABEL_29:
              if ( a3 == 4 )
              {
                if ( v11 == -1 )
                {
                  sub_2594B0(a2, "Rmt Nr  g/G Offset");
                }
                else if ( ((int (__fastcall *)(int))loc_166E9C)(**v4) > v11 && sub_1E7390(**v4, v11, &ptr, &v50) )
                {
                  sub_2594B0(a2, "%7d %11d", ptr, v50);
                }
              }
              break;
            }
            if ( ((int (__fastcall *)(int **, int))loc_1DD834)(v4, v11) == -1 )
              goto LABEL_81;
            sub_1DDD2C((int)v4, v11);
            v35 = *((_QWORD *)*v4 + 2);
            v36 = (int)v4[2] + *(_DWORD *)(v35 + 4 * v11);
            v44 = *(_DWORD *)(HIDWORD(v35) + 4 * v11);
            v37 = ((int (__fastcall *)(int))loc_165BB8)(v7);
            sub_267B6C(a2, v36, v44, v37, 1);
          }
          else
          {
            sub_2594B0(a2, "<cooked>");
          }
          break;
        case 2:
          if ( v11 != -1 )
          {
            if ( ((int (__fastcall *)(int))loc_166E9C)(**v4) <= v11 )
            {
              v24 = ((int (__fastcall *)(int **, int))loc_1DE038)(v4, v11);
              if ( sub_26ED18(v24) || !sub_26E65C(v24) )
              {
                sub_2594B0(a2, "<unavailable>");
              }
              else
              {
                v38 = sub_26E738(v24);
                v23 = 4 * v11;
                v25 = v38;
                v22 = *v4;
LABEL_26:
                v45 = v25;
                v43 = *(_DWORD *)(v22[5] + v23);
                v26 = ((int (__fastcall *)(int))loc_165BB8)(v7);
                sub_267B6C(a2, v45, v43, v26, 1);
              }
              if ( v24 )
              {
                sub_26C3B8(v24);
                ((void (__fastcall *)(int))loc_26C200)(v24);
              }
              break;
            }
            sub_1DDD2C((int)v4, v11);
            v21 = ((int (__fastcall *)(int **, int))loc_1DD834)(v4, v11);
            if ( !v21 )
              goto LABEL_28;
            if ( v21 != -1 )
            {
              v22 = *v4;
              v23 = 4 * v11;
              v24 = 0;
              v25 = (int)v4[2] + *(_DWORD *)((*v4)[4] + 4 * v11);
              goto LABEL_26;
            }
LABEL_81:
            sub_2594B0(a2, "<unavailable>");
            break;
          }
          sub_2594B0(a2, "Cooked value");
          break;
        case 3:
          if ( v11 == -1 )
          {
            sub_2594B0(a2, "Groups");
          }
          else
          {
            v31 = ((int (__fastcall *)(int, _DWORD))loc_1E04EC)(v7, 0);
            if ( v31 )
            {
              v46 = v4;
              v32 = (__int16 *)"";
              do
              {
                if ( ((int (__fastcall *)(int, int, int))loc_16AF90)(v7, v11, v31) )
                {
                  v33 = sub_1E0454(v31);
                  v34 = v32;
                  v32 = &word_3D7D40;
                  sub_2594B0(a2, "%s%s", v34, v33);
                }
                v31 = ((int (__fastcall *)(int, int))loc_1E04EC)(v7, v31);
              }
              while ( v31 );
              v4 = v46;
            }
          }
          break;
        default:
          goto LABEL_29;
      }
      ++v11;
      result = sub_2594B0(a2, (const char *)&word_356638);
      if ( (*v4)[2] <= v11 )
      {
        if ( v40 )
          result = sub_2594B0(a2, "*%d: Inconsistent register offsets.\n", v40);
        if ( v42 )
          return sub_2594B0(a2, "*%d: Register type's name NULL.\n", v42);
        return result;
      }
    }
    v28 = v42;
    if ( !v42 )
    {
      v28 = v41 + 1;
      v42 = ++v41;
    }
    sub_931D8((char **)&v50, "*%d", v42, v28);
    v29 = ptr;
    if ( v50 == v52 )
    {
      sub_33B48C(&ptr, &v50);
      v29 = v50;
      goto LABEL_54;
    }
    if ( ptr == v49 )
    {
      ptr = v50;
      v48 = v51;
      v49[0] = v52[0];
    }
    else
    {
      ptr = v50;
      v48 = v51;
      v30 = v49[0];
      v49[0] = v52[0];
      if ( v29 )
      {
        v50 = v29;
        v52[0] = v30;
LABEL_54:
        v51 = 0;
        *v29 = 0;
        if ( v50 != v52 )
          sub_339E64(v50);
        v20 = (const char *)ptr;
        goto LABEL_15;
      }
    }
    v50 = v52;
    v29 = v52;
    goto LABEL_54;
  }
  return result;
}
