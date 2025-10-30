void __fastcall sub_2BE54(int a1, unsigned int a2)
{
  FILE *v3; // r0
  int v5; // r7
  _BOOL4 v6; // r0
  size_t v7; // r9
  size_t v8; // r9
  size_t v9; // r10
  char *v10; // r11
  char *v11; // r7
  int v12; // r0
  unsigned int v13; // r2
  size_t v14; // r9
  __pid_t v15; // r0
  int v16; // r3
  int v17; // r5
  char v18; // r3
  int v19; // r0
  unsigned __int16 v20; // r3
  int v21; // r0
  unsigned int v22; // lr
  int v23; // r0
  int v24; // r0
  char v25; // r3
  char *v26; // r5
  __pid_t v27; // r0
  int v28; // [sp+8h] [bp-9Ch]
  size_t v29; // [sp+10h] [bp-94h]
  char *v30; // [sp+14h] [bp-90h]
  char *v31; // [sp+14h] [bp-90h]
  char *v32; // [sp+14h] [bp-90h]
  char *v33; // [sp+14h] [bp-90h]
  char *v34; // [sp+14h] [bp-90h]
  time_t v35; // [sp+18h] [bp-8Ch] BYREF
  unsigned __int16 v36; // [sp+1Ch] [bp-88h] BYREF
  unsigned __int8 v37; // [sp+1Eh] [bp-86h]
  char v38; // [sp+1Fh] [bp-85h]
  char v39; // [sp+20h] [bp-84h]
  char v40; // [sp+21h] [bp-83h]
  char v41; // [sp+22h] [bp-82h]
  unsigned __int16 v42; // [sp+24h] [bp-80h] BYREF
  int v43; // [sp+28h] [bp-7Ch]
  char v44; // [sp+2Ch] [bp-78h]
  char v45[16]; // [sp+30h] [bp-74h] BYREF
  int v46; // [sp+40h] [bp-64h]
  unsigned int v47; // [sp+44h] [bp-60h]

  if ( *(char *)(a1 + 21) >= 0 )
  {
    v3 = *(FILE **)a1;
    if ( v3 )
    {
      fclose(v3);
      *(_DWORD *)a1 = 0;
    }
    return;
  }
  switch ( *(_BYTE *)(a1 + 20) )
  {
    case 1:
      v5 = *(_DWORD *)(a1 + 12);
      v6 = v5 != getpid();
      if ( !*(_DWORD *)a1 )
        v6 = 1;
      if ( v6 )
        goto LABEL_16;
      return;
    case 2:
    case 3:
    case 4:
    case 5:
      if ( a2 < *(_DWORD *)(a1 + 12) || a2 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_16;
      goto LABEL_11;
    case 6:
      if ( *(_DWORD *)(a1 + 12) > (unsigned int)current_time || (unsigned int)current_time >= *(_DWORD *)(a1 + 16) )
        goto LABEL_16;
LABEL_11:
      if ( *(_DWORD *)a1 )
        return;
LABEL_16:
      v35 = time(0);
      v7 = strlen(*(const char **)(a1 + 4));
      v8 = v7 + strlen(*(const char **)(a1 + 8));
      v9 = v8 + 65;
      v10 = (char *)sub_63BA4(0, v8 + 65, 0, 0);
      v11 = (char *)sub_63BA4(0, v8 + 65, 0, 0);
      v29 = v8 + 64;
      sub_6C054(v10, v8 + 65, "%s%s", *(const char **)(a1 + 4), *(const char **)(a1 + 8));
      v12 = sub_6D4DC(v11);
      v11[v8 + 64] = 0;
      v13 = *(unsigned __int8 *)(a1 + 20);
      v14 = v8 + 65 - v12;
      if ( v13 == 4 )
      {
        v34 = &v11[v12];
        sub_66750(&v42, a2, &v35);
        sub_6C054(v34, v14, "%c%04d%02d", 46, v42, (unsigned __int8)v43);
        v44 = 0;
        HIWORD(v43) = 0;
        BYTE1(v43) = 1;
        v24 = sub_66830(&v42);
        v25 = v43;
        *(_DWORD *)(a1 + 12) = v24;
        LOBYTE(v43) = v25 + 1;
        *(_DWORD *)(a1 + 16) = sub_66830(&v42);
        v16 = (unsigned __int8)v11[v29];
        goto LABEL_22;
      }
      if ( v13 > 4 )
      {
        if ( v13 == 6 )
        {
          v22 = (_DWORD)&off_15180 * (current_time / 0x15180u);
          *(_DWORD *)(a1 + 12) = v22;
          *(_DWORD *)(a1 + 16) = v22 + 86400;
          sub_6C054(&v11[v12], v9 - v12, "%ca%08ld", 46, v22);
          v16 = (unsigned __int8)v11[v29];
          goto LABEL_22;
        }
        if ( v13 < 6 )
        {
          v31 = &v11[v12];
          sub_66750(&v42, a2, &v35);
          sub_6C054(v31, v14, "%c%04d", 46, v42);
          v44 = 0;
          v43 = 257;
          v19 = sub_66830(&v42);
          v20 = v42;
          *(_DWORD *)(a1 + 12) = v19;
          v42 = v20 + 1;
          *(_DWORD *)(a1 + 16) = sub_66830(&v42);
          v16 = (unsigned __int8)v11[v29];
          goto LABEL_22;
        }
        if ( v13 == 255 )
          goto LABEL_33;
LABEL_41:
        sub_64E00(3, "unsupported file generations type %d for \"%s\" - reverting to FILEGEN_NONE", v13, v10);
        *(_BYTE *)(a1 + 20) = -1;
        if ( !v11[v29] )
          goto LABEL_33;
        goto LABEL_42;
      }
      if ( v13 == 2 )
      {
        v33 = &v11[v12];
        sub_66750(&v42, a2, &v35);
        sub_6C054(v33, v14, "%c%04d%02d%02d", 46, v42, (unsigned __int8)v43, BYTE1(v43));
        HIWORD(v43) = 0;
        v44 = 0;
        v23 = sub_66830(&v42);
        *(_DWORD *)(a1 + 12) = v23;
        *(_DWORD *)(a1 + 16) = v23 + 86400;
        v16 = (unsigned __int8)v11[v29];
        goto LABEL_22;
      }
      if ( v13 > 2 )
      {
        v32 = &v11[v12];
        sub_66CC4(&v36, a2, &v35);
        sub_6C054(v32, v14, "%c%04dw%02d", 46, v36, v37);
        v38 = 1;
        v41 = 0;
        v40 = 0;
        v39 = 0;
        v21 = sub_66DC4(&v36);
        *(_DWORD *)(a1 + 12) = v21;
        *(_DWORD *)(a1 + 16) = v21 + 604800;
        v16 = (unsigned __int8)v11[v29];
        goto LABEL_22;
      }
      if ( v13 != 1 )
        goto LABEL_41;
      v30 = &v11[v12];
      v15 = getpid();
      *(_DWORD *)(a1 + 12) = v15;
      *(_DWORD *)(a1 + 16) = 0;
      sub_6C054(v30, v14, "%c#%ld", 46, v15);
      v16 = (unsigned __int8)v11[v29];
LABEL_22:
      if ( !v16 )
        goto LABEL_23;
LABEL_42:
      v11[v29] = 0;
      sub_64E00(3, "logfile name truncated: \"%s\"", v11);
LABEL_23:
      if ( *(unsigned __int8 *)(a1 + 20) != 255 )
      {
        if ( _xstat64(3, v10, v45) )
        {
          if ( *_errno_location() != 2 )
            sub_64E00(3, "stat(%s) failed: %m", v10);
        }
        else if ( (v46 & 0xF000) == 0x8000 )
        {
          if ( v47 <= 1 )
          {
            v26 = (char *)sub_63BA4(0, v9, 0, 0);
            v27 = getpid();
            v28 = dword_B9924++;
            sub_6C054(v26, v9, "%s%c%dC%lu", v10, 46, v27, v28);
            if ( rename(v10, v26) )
              sub_64E00(3, "couldn't save %s: %m", v10);
            free(v26);
          }
          else if ( unlink(v10) )
          {
            sub_64E00(3, "couldn't unlink %s: %m", v10);
          }
        }
        else
        {
          sub_64E00(3, "expected regular file for %s (found mode 0%lo)", v10, v46);
        }
      }
LABEL_33:
      v17 = fopen64(v11, &off_99960);
      if ( v17 )
      {
        if ( *(_DWORD *)a1 )
          fclose(*(FILE **)a1);
        v18 = *(_BYTE *)(a1 + 21);
        *(_DWORD *)a1 = v17;
        if ( (v18 & 1) != 0 && link(v11, v10) && *_errno_location() != 17 )
          sub_64E00(3, "can't link(%s, %s): %m", v11, v10);
      }
      else if ( *_errno_location() != 2 )
      {
        sub_64E00(3, "can't open %s: %m", v11);
      }
      free(v10);
      free(v11);
      return;
    default:
      if ( !*(_DWORD *)a1 )
        goto LABEL_16;
      return;
  }
}
