int *__fastcall sub_88A20(char *a1)
{
  char *v1; // r5
  char *v2; // r0
  int v3; // r3
  unsigned __int8 *v4; // r8
  int v5; // t1
  unsigned __int8 *v6; // r7
  int v7; // r6
  int v8; // r2
  unsigned __int8 *v9; // r9
  int v10; // r4
  char *v11; // r0
  int v12; // r3
  int v13; // t1
  int v14; // t1
  int v15; // r6
  int v16; // r8
  int *v17; // r0
  int *v18; // r7
  int v19; // r2
  int *v20; // r6
  unsigned int v21; // r3
  int v22; // r3
  unsigned __int8 *v23; // r2
  unsigned int v24; // r1
  char *v25; // r0
  char *v26; // r3
  int *v27; // r1
  unsigned int v28; // t1
  char *v29; // r1
  char v30; // r2
  int v31; // r0
  char *v32; // r0
  int v33; // r3
  int *v35; // r0
  char *v36; // [sp+8h] [bp-14h]
  char v37; // [sp+13h] [bp-9h] BYREF

  v1 = a1;
  if ( !a1 )
    goto LABEL_76;
  v2 = (char *)dword_107334;
  if ( !dword_107334 )
    v2 = sub_7E2F8(12);
  v3 = (unsigned __int8)*v1;
  v4 = (unsigned __int8 *)v1;
  if ( v2[v3] )
  {
    do
    {
      v5 = *++v4;
      v3 = v5;
    }
    while ( v2[v5] );
  }
  if ( !v3 )
  {
LABEL_76:
    v18 = 0;
    *_errno_location() = 2;
    return v18;
  }
  v6 = v4;
  v7 = 2;
  do
  {
    v8 = dword_107334;
    ++v7;
    v9 = v6 + 1;
    if ( dword_107334 )
    {
      v10 = v6[1];
      if ( !v6[1] )
      {
        ++v6;
        v11 = (char *)dword_107334;
        goto LABEL_16;
      }
      v11 = (char *)dword_107334;
      if ( *(_BYTE *)(dword_107334 + v10) )
        goto LABEL_15;
      do
      {
LABEL_13:
        v13 = *++v9;
        v12 = v13;
      }
      while ( v13 && !*(_BYTE *)(v8 + v12) );
      goto LABEL_14;
    }
    v32 = sub_7E2F8(12);
    v8 = (int)v32;
    if ( v6[1] )
    {
      v33 = (unsigned __int8)v32[v6[1]];
      v11 = (char *)dword_107334;
      if ( !v33 )
        goto LABEL_13;
    }
    else
    {
      v11 = (char *)dword_107334;
    }
LABEL_14:
    if ( v11 )
    {
LABEL_15:
      v10 = *v9;
      v6 = v9;
      goto LABEL_16;
    }
    v6 = v9;
    v11 = sub_7E2F8(12);
    v10 = *v9;
LABEL_16:
    if ( v11[v10] )
    {
      do
      {
        v14 = *++v6;
        v10 = v14;
      }
      while ( v11[v14] );
    }
  }
  while ( v10 );
  v15 = v7;
  v16 = v6 - v4 + v15 * 4 + 8;
  v17 = (int *)malloc(v16);
  v18 = v17;
  if ( !v17 )
    sub_C610(v16);
  v19 = 0;
  v20 = &v17[v15];
  v21 = (unsigned __int8)*v1;
  v17[1] = (int)v20;
LABEL_21:
  *v18 = v19 + 1;
  v18[v19 + 1] = (int)v20;
LABEL_22:
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v21 <= 0x7F && (dword_9F184[v21] & 0xC01) != 0 )
        goto LABEL_35;
      if ( v21 == 34 )
      {
        v29 = v1 + 1;
        while ( 1 )
        {
          v1 = v29 + 1;
          v37 = *v29;
          v30 = v37;
          switch ( v37 )
          {
            case 34:
              if ( v29 == (char *)-1 )
                goto LABEL_74;
              v21 = (unsigned __int8)v29[1];
              if ( v21 > 0x7F || (dword_9F184[v21] & 0xC01) == 0 )
                goto LABEL_22;
LABEL_35:
              v25 = (char *)dword_107334;
              v26 = v1;
              v27 = v20;
              ++v1;
              if ( !dword_107334 )
              {
                v36 = v26;
                v25 = sub_7E2F8(12);
                v26 = v36;
                v27 = v20;
              }
              v21 = (unsigned __int8)v26[1];
              if ( v25[v21] )
              {
                do
                {
                  v28 = (unsigned __int8)*++v1;
                  v21 = v28;
                }
                while ( v25[v28] );
              }
              v20 = (int *)((char *)v20 + 1);
              *(_BYTE *)v27 = 0;
              if ( v21 )
              {
                v19 = *v18;
                goto LABEL_21;
              }
              goto LABEL_72;
            case 92:
              v31 = sub_81DDC(v1, &v37, 127);
              v30 = v37;
              v1 += v31;
              if ( v37 != 127 )
                goto LABEL_47;
              v29 = v1;
              break;
            case 0:
              goto LABEL_74;
            default:
LABEL_47:
              *(_BYTE *)v20 = v30;
              v29 = v1;
              v20 = (int *)((char *)v20 + 1);
              break;
          }
        }
      }
      if ( v21 != 39 )
      {
        if ( v21 )
        {
          *(_BYTE *)v20 = v21;
          v21 = (unsigned __int8)*++v1;
          v20 = (int *)((char *)v20 + 1);
          continue;
        }
        *(_BYTE *)v20 = 0;
LABEL_72:
        v18[*v18 + 1] = 0;
        return v18;
      }
      break;
    }
    v22 = (unsigned __int8)v1[1];
    v23 = (unsigned __int8 *)(v1 + 1);
    while ( 2 )
    {
      v1 = (char *)(v23 + 1);
      if ( v22 != 39 )
      {
LABEL_28:
        if ( v22 == 92 )
        {
          v24 = v23[1];
          if ( v24 == 13 )
          {
            v22 = v23[2];
            if ( v22 == 10 )
            {
              v22 = v23[3];
              v23 += 3;
            }
            else
            {
              v23 += 2;
            }
            continue;
          }
          if ( v24 > 0xD )
          {
            if ( v24 == 39 || v24 == 92 )
            {
              v22 = v23[2];
              v23 += 2;
              goto LABEL_31;
            }
          }
          else
          {
            if ( !v23[1] )
              goto LABEL_74;
            if ( v24 == 10 )
            {
              v22 = v23[2];
              v23 += 2;
              continue;
            }
          }
          v22 = v23[1];
          v23 = (unsigned __int8 *)v1;
          LOBYTE(v24) = 92;
        }
        else
        {
          if ( !v22 )
            goto LABEL_74;
          LOBYTE(v24) = v22;
          v22 = v23[1];
          v23 = (unsigned __int8 *)v1;
        }
LABEL_31:
        *(_BYTE *)v20 = v24;
        v1 = (char *)(v23 + 1);
        v20 = (int *)((char *)v20 + 1);
        if ( v22 == 39 )
          break;
        goto LABEL_28;
      }
      break;
    }
    if ( v1 )
    {
      v21 = (unsigned __int8)*v1;
      if ( v21 <= 0x7F && (dword_9F184[v21] & 0xC01) != 0 )
        goto LABEL_35;
      continue;
    }
    break;
  }
LABEL_74:
  v35 = v18;
  v18 = 0;
  free(v35);
  *_errno_location() = 22;
  return v18;
}
