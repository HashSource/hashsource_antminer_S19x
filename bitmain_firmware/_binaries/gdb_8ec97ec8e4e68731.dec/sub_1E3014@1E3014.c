int __fastcall sub_1E3014(int a1)
{
  int v1; // r8
  int v2; // r7
  int v3; // r0
  const char **v4; // r4
  int v5; // r0
  const char *v6; // r4
  int *v7; // r6
  signed int v8; // r0
  size_t v9; // r5
  int v10; // r1
  int v11; // r9
  int v12; // r0
  int v13; // r1
  const char *v14; // r4
  int v15; // r0
  int v16; // r3
  int v17; // r10
  bool v18; // zf
  char v19; // r9
  int v20; // r5
  int i; // r4
  int result; // r0
  int v23; // r9
  int v24; // r0
  int v25; // r10
  int v26; // r9
  size_t v27; // r0
  int s; // [sp+8h] [bp-34h] BYREF
  int p_s; // [sp+Ch] [bp-30h]
  const char **v30; // [sp+10h] [bp-2Ch]
  const char *v31; // [sp+14h] [bp-28h]

  s = a1;
  v2 = sub_1DD58C(a1);
  v3 = sub_16F654(v2);
  ((void (__fastcall *)(int))loc_1E2770)(v3);
  v4 = (const char **)dword_488C94;
  v30 = (const char **)dword_488C94;
  v5 = ((int (__fastcall *)(int))loc_1E2770)(v2);
  v6 = *v4;
  v7 = (int *)v5;
  v8 = strlen(v6);
  v9 = *v7;
  v10 = 2 * *v7;
  if ( v10 < v8 )
    sub_946E0("Remote 'g' packet reply is too long (expected %ld bytes, got %d bytes): %s", *v7, v8 >> 1, v6);
  if ( !v7[2] )
    v7[2] = v8;
  if ( v10 > v8 )
  {
    v11 = 0;
    v1 = 0;
    p_s = v8 >> 1;
    while ( v1 < ((int (__fastcall *)(int))loc_166E9C)(v2) )
    {
      v31 = *(const char **)(v7[1] + v11);
      v12 = ((int (__fastcall *)(int, int))loc_1DD420)(v2, v1);
      v13 = v7[1] + v11;
      if ( *(_QWORD *)(v13 + 8) != -1 )
      {
        if ( p_s > (int)v31 )
        {
          if ( (int)&v31[v12] > p_s )
            goto LABEL_39;
          *(_DWORD *)(v13 + 16) = 1;
        }
        else
        {
          *(_DWORD *)(v13 + 16) = 0;
        }
      }
      ++v1;
      v11 += 24;
    }
    v9 = p_s;
    *v7 = p_s;
  }
  p_s = (int)&s;
  memset(&s, 0, v9);
  v14 = *v30;
  if ( *v7 > 0 )
  {
    v15 = *(unsigned __int8 *)v14;
    if ( !*v14 || (v16 = *((unsigned __int8 *)v14 + 1), !v14[1]) )
    {
LABEL_36:
      sub_94700((int)"remote.c", 7629, "unexpected end of 'g' packet reply");
LABEL_37:
      sub_94700((int)"remote.c", 7648, "unexpected end of 'g' packet reply");
LABEL_38:
      sub_94700(
        (int)"remote.c",
        7652,
        "%s: Assertion `%s' failed.",
        "void process_g_packet(regcache*)",
        "r->offset * 2 < strlen (rs->buf)");
LABEL_39:
      sub_946E0("Truncated register %d in remote 'g' packet", v1);
    }
    v1 = 0;
    v17 = p_s;
    while ( 1 )
    {
      v18 = v16 == 120;
      if ( v16 == 120 )
        v18 = v15 == 120;
      if ( v18 )
      {
        *(_BYTE *)(v17 + v1) = 0;
      }
      else
      {
        v19 = sub_990E4(v15);
        *(_BYTE *)(v17 + v1) = sub_990E4(*((unsigned __int8 *)v14 + 1)) + 16 * v19;
      }
      if ( *v7 <= ++v1 )
        break;
      v15 = *((unsigned __int8 *)v14 + 2);
      if ( v14[2] )
      {
        v14 += 2;
        v16 = *((unsigned __int8 *)v14 + 1);
        if ( v14[1] )
          continue;
      }
      goto LABEL_36;
    }
  }
  v20 = 0;
  for ( i = 0; ; ++i )
  {
    result = ((int (__fastcall *)(int))loc_166E9C)(v2);
    if ( i >= result )
      break;
    v23 = v7[1];
    v24 = ((int (__fastcall *)(int, int))loc_1DD420)(v2, i);
    v25 = v23 + v20;
    if ( *(_DWORD *)(v23 + v20 + 16) )
    {
      v26 = *(_DWORD *)(v23 + v20);
      v1 = v26 + v24;
      v31 = *v30;
      v27 = strlen(v31);
      if ( v27 < 2 * v1 )
        goto LABEL_37;
      if ( v31[2 * v26] == 120 )
      {
        if ( v27 <= 2 * v26 )
          goto LABEL_38;
        ((void (__fastcall *)(int, _DWORD, _DWORD))loc_1DE9C8)(s, *(_DWORD *)(v25 + 4), 0);
      }
      else
      {
        ((void (__fastcall *)(int, _DWORD, int))loc_1DE9C8)(s, *(_DWORD *)(v25 + 4), p_s + v26);
      }
    }
    v20 += 24;
  }
  return result;
}
