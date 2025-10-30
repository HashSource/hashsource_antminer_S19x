int __fastcall sub_15C444(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int result; // r0
  __int64 v5; // r0
  int v6; // [sp+Ch] [bp-18h] BYREF
  int v7; // [sp+10h] [bp-14h] BYREF
  int v8; // [sp+14h] [bp-10h] BYREF
  int v9; // [sp+18h] [bp-Ch]
  int v10; // [sp+1Ch] [bp-8h]

  v1 = a1[13];
  v2 = a1[14];
  v3 = a1[15];
  v6 = a1[12];
  v7 = v1;
  v8 = v2;
  v9 = v3;
  v10 = a1[16];
  if ( (v3 & 0x1F) != 0 )
  {
    if ( (v3 & 7) == 1 )
    {
      result = sub_32426C(&v6, 4, 0);
      LOBYTE(v3) = v9;
    }
    else
    {
      result = 0;
    }
    if ( (v3 & 8) != 0 )
    {
      result = sub_32426C(&v7, 4, result);
      LOBYTE(v3) = v9;
    }
    if ( (v3 & 0x10) != 0 )
      return sub_32426C(&v8, 4, result);
  }
  else
  {
    v5 = sub_94700(
           (int)"frame.c",
           180,
           "%s: Assertion `%s' failed.",
           "hashval_t frame_addr_hash(const void*)",
           "f_id.stack_status != FID_STACK_INVALID || f_id.code_addr_p || f_id.special_addr_p");
    return sub_15C504(v5, HIDWORD(v5));
  }
  return result;
}
