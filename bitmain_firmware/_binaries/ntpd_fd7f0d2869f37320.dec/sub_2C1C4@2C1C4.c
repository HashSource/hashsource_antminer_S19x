void __fastcall sub_2C1C4(int a1, unsigned int a2)
{
  FILE *v3; // r0
  size_t v5; // r7
  size_t v6; // r0
  int v7; // r10
  char *v8; // r11
  char *v9; // r7
  int v10; // r0
  unsigned int v11; // r2
  __pid_t v12; // r0
  int v13; // r3
  int v14; // r2
  int v15; // r7
  int v16; // r5
  char v17; // r3
  unsigned int v18; // r12
  int v19; // r0
  int v20; // r0
  int v21; // r0
  char *v22; // r5
  __pid_t v23; // r0
  int v24; // [sp+8h] [bp-A4h]
  int v25; // [sp+14h] [bp-98h]
  char *v26; // [sp+18h] [bp-94h]
  int v27; // [sp+1Ch] [bp-90h]
  int v28; // [sp+1Ch] [bp-90h]
  int v29; // [sp+1Ch] [bp-90h]
  int v30; // [sp+1Ch] [bp-90h]
  int v31; // [sp+1Ch] [bp-90h]
  time_t v32; // [sp+20h] [bp-8Ch] BYREF
  unsigned __int16 v33; // [sp+24h] [bp-88h] BYREF
  unsigned __int8 v34; // [sp+26h] [bp-86h]
  char v35; // [sp+27h] [bp-85h]
  char v36; // [sp+28h] [bp-84h]
  char v37; // [sp+29h] [bp-83h]
  char v38; // [sp+2Ah] [bp-82h]
  unsigned __int16 v39; // [sp+2Ch] [bp-80h] BYREF
  unsigned __int8 v40; // [sp+30h] [bp-7Ch]
  unsigned __int8 v41; // [sp+31h] [bp-7Bh]
  char v42; // [sp+32h] [bp-7Ah]
  char v43; // [sp+33h] [bp-79h]
  char v44; // [sp+34h] [bp-78h]
  _BYTE v45[16]; // [sp+38h] [bp-74h] BYREF
  int v46; // [sp+48h] [bp-64h]
  unsigned int v47; // [sp+4Ch] [bp-60h]

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
      v15 = *(_DWORD *)(a1 + 12);
      if ( (v15 == getpid()) <= (unsigned int)(*(_DWORD *)a1 == 0) )
        goto LABEL_7;
      return;
    case 2:
    case 3:
    case 4:
    case 5:
      if ( a2 < *(_DWORD *)(a1 + 12) || a2 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_7;
      goto LABEL_23;
    case 6:
      if ( *(_DWORD *)(a1 + 12) > (unsigned int)current_time || (unsigned int)current_time >= *(_DWORD *)(a1 + 16) )
        goto LABEL_7;
      goto LABEL_23;
    default:
LABEL_23:
      if ( *(_DWORD *)a1 )
        return;
LABEL_7:
      v32 = time(0);
      v5 = strlen(*(const char **)(a1 + 4));
      v6 = strlen(*(const char **)(a1 + 8));
      v7 = v6 + v5 + 65;
      v25 = v6 + v5 + 64;
      v8 = (char *)sub_64B04(0, v7, 0, 0);
      v9 = (char *)sub_64B04(0, v7, 0, 0);
      sub_6D00C(v8, v7, "%s%s", *(const char **)(a1 + 4), *(const char **)(a1 + 8));
      v10 = sub_6E4B4(v9);
      v9[v25] = 0;
      v11 = *(unsigned __int8 *)(a1 + 20);
      v26 = &v9[v10];
      if ( v11 == 4 )
      {
        v29 = v7 - v10;
        sub_67758(&v39, a2, &v32);
        sub_6D00C(v26, v29, "%c%04d%02d", 46, v39, v40);
        v44 = 0;
        v41 = 1;
        v43 = 0;
        v42 = 0;
        v21 = sub_67838(&v39);
        ++v40;
        goto LABEL_51;
      }
      if ( v11 > 4 )
      {
        if ( v11 == 6 )
        {
          v18 = current_time - current_time % 0x15180u;
          *(_DWORD *)(a1 + 12) = v18;
          *(_DWORD *)(a1 + 16) = v18 + 86400;
          sub_6D00C(v26, v7 - v10, "%ca%08ld", 46, v18);
          v13 = (unsigned __int8)v9[v25];
          goto LABEL_13;
        }
        if ( v11 >= 6 )
        {
          if ( v11 == 255 )
            goto LABEL_31;
          goto LABEL_43;
        }
        v31 = v7 - v10;
        sub_67758(&v39, a2, &v32);
        sub_6D00C(v26, v31, "%c%04d", 46, v39);
        v44 = 0;
        v41 = 1;
        v40 = 1;
        v43 = 0;
        v42 = 0;
        v21 = sub_67838(&v39);
        ++v39;
LABEL_51:
        *(_DWORD *)(a1 + 12) = v21;
        *(_DWORD *)(a1 + 16) = sub_67838(&v39);
        v13 = (unsigned __int8)v9[v25];
        goto LABEL_13;
      }
      if ( v11 == 2 )
      {
        v28 = v7 - v10;
        sub_67758(&v39, a2, &v32);
        sub_6D00C(v26, v28, "%c%04d%02d%02d", 46, v39, v40, v41);
        v44 = 0;
        v43 = 0;
        v42 = 0;
        v19 = sub_67838(&v39);
        *(_DWORD *)(a1 + 12) = v19;
        *(_DWORD *)(a1 + 16) = v19 + 86400;
        v13 = (unsigned __int8)v9[v25];
        goto LABEL_13;
      }
      if ( v11 > 2 )
      {
        v30 = v7 - v10;
        sub_67C7C(&v33, a2, &v32);
        sub_6D00C(v26, v30, "%c%04dw%02d", 46, v33, v34);
        v38 = 0;
        v35 = 1;
        v37 = 0;
        v36 = 0;
        v20 = sub_67D7C(&v33);
        *(_DWORD *)(a1 + 12) = v20;
        *(_DWORD *)(a1 + 16) = v20 + 604800;
        v13 = (unsigned __int8)v9[v25];
        goto LABEL_13;
      }
      if ( v11 != 1 )
      {
LABEL_43:
        sub_65D40(3, "unsupported file generations type %d for \"%s\" - reverting to FILEGEN_NONE", v11, v8);
        *(_BYTE *)(a1 + 20) = -1;
        if ( !v9[v25] )
          goto LABEL_31;
        goto LABEL_44;
      }
      v27 = v7 - v10;
      v12 = getpid();
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 12) = v12;
      sub_6D00C(v26, v27, "%c#%ld", 46, v12);
      v13 = (unsigned __int8)v9[v25];
LABEL_13:
      if ( !v13 )
      {
        v14 = *(unsigned __int8 *)(a1 + 20);
        goto LABEL_15;
      }
LABEL_44:
      v9[v25] = 0;
      sub_65D40(3, "logfile name truncated: \"%s\"", v9);
      v14 = *(unsigned __int8 *)(a1 + 20);
LABEL_15:
      if ( v14 != 255 )
      {
        if ( _xstat64(3, v8, v45) )
        {
          if ( *_errno_location() != 2 )
            sub_65D40(3, "stat(%s) failed: %m", v8);
        }
        else if ( (v46 & 0xF000) == 0x8000 )
        {
          if ( v47 <= 1 )
          {
            v22 = (char *)sub_64B04(0, v7, 0, 0);
            v23 = getpid();
            v24 = dword_BA924++;
            sub_6D00C(v22, v7, "%s%c%dC%lu", v8, 46, v23, v24);
            if ( rename(v8, v22) )
              sub_65D40(3, "couldn't save %s: %m", v8);
            free(v22);
          }
          else if ( unlink(v8) )
          {
            sub_65D40(3, "couldn't unlink %s: %m", v8);
          }
        }
        else
        {
          sub_65D40(3, "expected regular file for %s (found mode 0%lo)", v8, v46);
        }
      }
LABEL_31:
      v16 = fopen64(v9, &off_9AF30);
      if ( v16 )
      {
        if ( *(_DWORD *)a1 )
          fclose(*(FILE **)a1);
        v17 = *(_BYTE *)(a1 + 21);
        *(_DWORD *)a1 = v16;
        if ( (v17 & 1) != 0 && link(v9, v8) && *_errno_location() != 17 )
          sub_65D40(3, "can't link(%s, %s): %m", v9, v8);
      }
      else if ( *_errno_location() != 2 )
      {
        sub_65D40(3, "can't open %s: %m", v9);
      }
      free(v8);
      free(v9);
      return;
  }
}
