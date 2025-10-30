int __fastcall sub_C4D98(int a1, int a2, int a3)
{
  int v5; // r4
  unsigned __int8 *v6; // r8
  int v7; // r0
  int v8; // r0
  int v9; // r9
  int v10; // r11
  unsigned __int8 *v11; // r6
  char *v12; // r7
  int v13; // r5
  int v14; // r4
  int v15; // r0
  char *v16; // r1
  int v17; // r6
  char *v18; // r8
  char *v19; // r7
  int v20; // r9
  _DWORD *v21; // r4
  void *v22; // r0
  int result; // r0
  const char *v24; // r4
  int v25; // r0
  void *v26; // r5
  int v27; // r4
  char *v28; // r3
  char *v29; // r1
  int v30; // r3
  _BOOL4 v31; // [sp+Ch] [bp-A8h]
  char *endptr; // [sp+10h] [bp-A4h] BYREF
  _BYTE v33[8]; // [sp+14h] [bp-A0h] BYREF
  _DWORD v34[2]; // [sp+1Ch] [bp-98h] BYREF
  int v35; // [sp+24h] [bp-90h] BYREF
  char *v36; // [sp+28h] [bp-8Ch]
  char *v37; // [sp+2Ch] [bp-88h]
  char nptr[128]; // [sp+30h] [bp-84h] BYREF

  v5 = sub_B894C(a1);
  if ( !((int (*)(void))loc_16CC88)() )
    sub_946E0("The feature 'catch syscall' is not supported on this architecture yet.");
  v31 = sub_53238(a3) == 1;
  v6 = (unsigned __int8 *)sub_9360C(a1);
  v7 = sub_275A58(v5, 0, v33);
  if ( v6 )
  {
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v8 = sub_16F654(v7);
    v9 = v8;
    while ( *v6 )
    {
      v10 = sub_9360C(v6);
      v11 = (unsigned __int8 *)v10;
      v12 = nptr;
      v13 = 0;
      while ( 1 )
      {
        v14 = *v11;
        v6 = v11++;
        if ( !v14 || isspace(v14) )
          break;
        ++v13;
        *v12++ = v14;
        if ( v13 == 127 )
        {
          v6 = (unsigned __int8 *)(v10 + 127);
          break;
        }
      }
      nptr[v13] = 0;
      v15 = strtol(nptr, &endptr, 0);
      if ( *endptr )
      {
        if ( !strncmp(nptr, "g:", 2u) || !strncmp(nptr, "group:", 6u) )
        {
          v24 = strchr(nptr, 58) + 1;
          v25 = sub_275BDC(v9, v24);
          v26 = (void *)v25;
          if ( !v25 )
            sub_946E0("Unknown syscall group '%s'.", v24);
          if ( *(_DWORD *)(v25 + 4) )
          {
            v27 = v25 + 8;
            do
            {
              while ( 1 )
              {
                v28 = v37;
                if ( v36 != v37 )
                  break;
                sub_96B5C(&v35, v36, (_DWORD *)(v27 - 8));
                v27 += 8;
                if ( !*(_DWORD *)(v27 - 4) )
                  goto LABEL_33;
              }
              v27 += 8;
              if ( v36 )
                v28 = *(char **)(v27 - 16);
              v29 = v36 + 4;
              if ( v36 )
                *(_DWORD *)v36 = v28;
              v30 = *(_DWORD *)(v27 - 4);
              v36 = v29;
            }
            while ( v30 );
          }
LABEL_33:
          free(v26);
          continue;
        }
        v8 = sub_275AE4(v9, nptr, v34);
        if ( v34[0] == -1 )
          sub_946E0("Unknown syscall name '%s'.", nptr);
        v16 = v36;
        if ( v36 == v37 )
        {
LABEL_38:
          sub_96B5C(&v35, v16, v34);
          continue;
        }
        if ( v36 )
          *(_DWORD *)v36 = v34[0];
      }
      else
      {
        v8 = sub_275A58(v9, v15, v34);
        v16 = v36;
        if ( v36 == v37 )
          goto LABEL_38;
        if ( v36 )
          *(_DWORD *)v36 = v34[0];
      }
      v36 = v16 + 4;
    }
    v17 = v35;
    v18 = v36;
    v19 = v37;
    v20 = sub_B894C(v8);
    v21 = sub_9836C(0x94u);
  }
  else
  {
    v17 = 0;
    v20 = sub_B894C(v7);
    v19 = 0;
    v18 = 0;
    v21 = sub_9836C(0x94u);
  }
  memset(v21, 0, 0x94u);
  *((_BYTE *)v21 + 32) = 0;
  *((_BYTE *)v21 + 33) = 0;
  v21[4] = 1;
  v21[13] = 0;
  v21[14] = 0;
  v21[15] = 0;
  v21[16] = 0;
  v21[17] = 0;
  *v21 = off_37D208;
  v21[28] = -1;
  sub_D0244(v21, v20, v31, 0, &unk_4782B4);
  v22 = (void *)v21[34];
  v21[35] = v18;
  v21[36] = v19;
  v21[34] = v17;
  if ( v22 )
    sub_339E64(v22);
  *(_DWORD *)nptr = v21;
  sub_D9044(0, nptr, 1);
  result = *(_DWORD *)nptr;
  if ( *(_DWORD *)nptr )
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)nptr + 4))(*(_DWORD *)nptr);
  return result;
}
