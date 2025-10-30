int __fastcall sub_1E4BA0(const char **a1, size_t *a2)
{
  int v4; // r4
  const char *v5; // r8
  int v6; // r7
  int v7; // r0
  int v8; // r11
  int v9; // r0
  char v10; // r5
  int v11; // r0
  size_t v12; // r5
  int v13; // r3
  char *v14; // r0
  int v15; // r1
  _DWORD *v17; // r0
  int v18; // r0
  int v19; // r5
  _DWORD *v20; // r0
  int v21; // r6
  char v22; // r5
  int v23; // r5
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  size_t v26; // r1
  char *v27; // r0
  _DWORD *v28; // r0
  size_t v29; // r1
  char *v30; // r0
  const char *v31; // r0
  _DWORD *v32; // r0
  const char *v33; // r4
  void *ptr; // [sp+10h] [bp-1Ch] BYREF
  char v35; // [sp+18h] [bp-14h] BYREF

  v4 = 0;
  v5 = *a1;
  v6 = 0;
  v7 = sub_16F654((int)a1);
  ((void (__fastcall *)(int))loc_1E2770)(v7);
  v8 = dword_488C94;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = sub_1E4AF8(dword_46DCE8);
      v10 = v9;
      if ( v9 == 35 )
      {
        v5[v4] = 0;
        v18 = sub_1E4AF8(dword_46DCE8);
        v19 = v18;
        if ( v18 >= 0 )
        {
          v18 = sub_1E4AF8(dword_46DCE8);
          v21 = v18;
          if ( v18 == -2 )
            goto LABEL_22;
          if ( v18 >= 0 )
          {
            if ( !*(_DWORD *)(v8 + 20) )
            {
              v22 = sub_990E4(v19);
              v23 = (unsigned __int8)(sub_990E4(v21) | (16 * v22));
              if ( v6 != v23 )
              {
                if ( dword_48A590 )
                {
                  v24 = sub_1E1578(&ptr, (int)v5, v4);
                  v25 = (_DWORD *)sub_242FC8(v24);
                  sub_2594B0(*v25, "Bad checksum, sentsum=0x%x, csum=0x%x, buf=%s\n", v23, v6, (const char *)ptr);
                  if ( ptr != &v35 )
                    sub_339E64(ptr);
                }
                return -1;
              }
            }
            return v4;
          }
        }
        else if ( v18 == -2 )
        {
LABEL_22:
          if ( !dword_48A590 )
            return -1;
          v20 = (_DWORD *)sub_242FC8(v18);
          v4 = -1;
          sub_25A6BC("Timeout in checksum, retrying\n", *v20);
          return v4;
        }
        if ( !dword_48A590 )
          return -1;
        v32 = (_DWORD *)sub_242FC8(v18);
        v4 = -1;
        sub_25A6BC("Communication error in checksum\n", *v32);
        return v4;
      }
      if ( v9 > 35 )
        break;
      if ( v9 == -2 )
      {
        if ( dword_48A590 )
        {
          v17 = (_DWORD *)sub_242FC8(-2);
          sub_25A6BC("Timeout in mid-packet, retrying\n", *v17);
          return -1;
        }
        return -1;
      }
LABEL_17:
      if ( (int)(*a2 - 1) <= v4 )
      {
        v26 = 2 * *a2;
        v27 = (char *)*a1;
        *a2 = v26;
        v5 = (const char *)sub_93050(v27, v26);
        *a1 = v5;
      }
      v5[v4] = v10;
      v6 = (unsigned __int8)(v10 + v6);
      ++v4;
    }
    if ( v9 == 36 )
      break;
    if ( v9 != 42 )
      goto LABEL_17;
    v11 = sub_1E4AF8(dword_46DCE8);
    v12 = v11 - 29;
    v6 = (unsigned __int8)(v6 + 42 + v11);
    if ( (unsigned int)(v11 - 30) > 0xFE )
    {
      v33 = &v5[v4];
LABEL_35:
      *v33 = 0;
      v4 = -1;
      sub_259F10("Invalid run length encoding: %s\n", v5);
      return v4;
    }
    if ( !v4 )
    {
      v33 = v5;
      goto LABEL_35;
    }
    v13 = v4 + v12;
    if ( (int)*a2 <= (int)(v4 + v12) )
    {
      v29 = *a2 + v12;
      v30 = (char *)*a1;
      *a2 = v29;
      v31 = (const char *)sub_93050(v30, v29);
      v13 = v4 + v12;
      v5 = v31;
      *a1 = v31;
    }
    v14 = (char *)&v5[v4];
    v15 = (unsigned __int8)v5[v4 - 1];
    v4 = v13;
    memset(v14, v15, v12);
  }
  if ( !dword_48A590 )
    return -1;
  v28 = (_DWORD *)sub_242FC8(36);
  sub_25A6BC("Saw new packet start in middle of old one\n", *v28);
  return -1;
}
