int __fastcall sub_47600(int result)
{
  int v1; // r6
  int v2; // r4
  const char *v3; // r7
  _DWORD *v4; // r8
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r3
  char v8; // r2
  int v9; // r2
  int v10; // r1
  _DWORD *v11; // r4
  int v12; // [sp+1Ch] [bp-18h] BYREF
  char v13; // [sp+20h] [bp-14h] BYREF
  int v14; // [sp+24h] [bp-10h] BYREF
  int v15; // [sp+28h] [bp-Ch] BYREF

  v1 = *(_DWORD *)(result + 4);
  v2 = *(_DWORD *)(v1 + 84);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 20) )
  {
    v3 = (const char *)(v2 + 56);
    v4 = (_DWORD *)(v2 + 232);
    *(_DWORD *)(*(_DWORD *)v2 + 20) = 0;
    result = (unsigned __int16)sub_39EE4(result, (bool *)(v2 + 56), 128, (_DWORD *)(v2 + 232));
    *(_DWORD *)(v2 + 184) = (unsigned __int16)result;
    if ( (_WORD)result )
    {
      if ( sscanf(
             (const char *)(v2 + 56),
             "%1x%1x%2d%2d%2d%2d%2d%2d",
             &v12,
             &v13,
             v2 + 196,
             v2 + 200,
             v2 + 204,
             &v14,
             &v15,
             v2 + 188) == 8
        && *(_DWORD *)(v2 + 196) <= 0x17u
        && *(_DWORD *)(v2 + 200) <= 0x3Bu
        && *(_DWORD *)(v2 + 204) <= 0x3Cu
        && (unsigned int)(v14 - 1) <= 0x1E
        && (unsigned int)(v15 - 1) <= 0xB
        && (v5 = *(_DWORD *)(v2 + 188), v5 <= 0x63) )
      {
        v6 = sub_6EC68(v5, v15, v14);
        v7 = *(_DWORD *)(v2 + 188);
        *(_DWORD *)(v2 + 192) = v6;
        *(_BYTE *)(v2 + 40) = 0;
        if ( v7 <= 97 )
        {
          v7 += 100;
          *(_DWORD *)(v2 + 188) = v7;
        }
        v8 = v12;
        *(_DWORD *)(v2 + 188) = v7 + 1900;
        v9 = v8 & 0xC;
        if ( v9 && (v9 != 4 || (*(_BYTE *)(v2 + 768) & 1) != 0) )
        {
          if ( sub_39CF8((_DWORD *)v2) )
          {
            v10 = *(_DWORD *)(v2 + 236);
            v11 = (_DWORD *)(v2 + 224);
            *v11 = *v4;
            v11[1] = v10;
            sub_39D44(v1);
            return sub_41F44(v1 + 16, v3);
          }
          else
          {
            return (int)sub_394A0((__int16 *)v1, 6);
          }
        }
        else
        {
          result = (int)sub_394A0((__int16 *)v1, 6);
          *(_BYTE *)(v2 + 40) = 3;
        }
      }
      else
      {
        return (int)sub_394A0((__int16 *)v1, 2);
      }
    }
  }
  return result;
}
