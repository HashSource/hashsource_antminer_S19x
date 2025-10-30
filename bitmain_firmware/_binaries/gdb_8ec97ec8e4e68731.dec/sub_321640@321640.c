const char *__fastcall sub_321640(unsigned int a1)
{
  if ( a1 == 21 )
    return "DW_FORM_ref_udata";
  if ( a1 <= 0x15 )
  {
    if ( a1 == 11 )
      return "DW_FORM_data1";
    if ( a1 > 0xB )
    {
      if ( a1 == 16 )
      {
        return "DW_FORM_ref_addr";
      }
      else if ( a1 <= 0x10 )
      {
        if ( a1 == 13 )
        {
          return "DW_FORM_sdata";
        }
        else if ( a1 >= 0xD )
        {
          if ( a1 == 14 )
            return "DW_FORM_strp";
          else
            return "DW_FORM_udata";
        }
        else
        {
          return "DW_FORM_flag";
        }
      }
      else if ( a1 == 18 )
      {
        return "DW_FORM_ref2";
      }
      else if ( a1 >= 0x12 )
      {
        if ( a1 == 19 )
          return "DW_FORM_ref4";
        else
          return "DW_FORM_ref8";
      }
      else
      {
        return "DW_FORM_ref1";
      }
    }
    else
    {
      if ( a1 == 6 )
        return "DW_FORM_data4";
      if ( a1 <= 6 )
      {
        if ( a1 == 3 )
          return "DW_FORM_block2";
        if ( a1 <= 3 )
        {
          if ( a1 == 1 )
            return "DW_FORM_addr";
          return 0;
        }
        if ( a1 == 4 )
          return "DW_FORM_block4";
        else
          return "DW_FORM_data2";
      }
      else if ( a1 == 8 )
      {
        return "DW_FORM_string";
      }
      else if ( a1 >= 8 )
      {
        if ( a1 == 9 )
          return "DW_FORM_block";
        else
          return "DW_FORM_block1";
      }
      else
      {
        return "DW_FORM_data8";
      }
    }
  }
  else
  {
    if ( a1 == 31 )
      return "DW_FORM_line_strp";
    if ( a1 <= 0x1F )
    {
      if ( a1 == 26 )
        return "DW_FORM_strx";
      if ( a1 <= 0x1A )
      {
        if ( a1 == 23 )
        {
          return "DW_FORM_sec_offset";
        }
        else if ( a1 >= 0x17 )
        {
          if ( a1 == 24 )
            return "DW_FORM_exprloc";
          else
            return "DW_FORM_flag_present";
        }
        else
        {
          return "DW_FORM_indirect";
        }
      }
      else if ( a1 == 28 )
      {
        return "DW_FORM_ref_sup4";
      }
      else if ( a1 >= 0x1C )
      {
        if ( a1 == 29 )
          return "DW_FORM_strp_sup";
        else
          return "DW_FORM_data16";
      }
      else
      {
        return "DW_FORM_addrx";
      }
    }
    if ( a1 == 36 )
      return "DW_FORM_ref_sup8";
    if ( a1 > 0x24 )
    {
      if ( a1 == 7938 )
        return "DW_FORM_GNU_str_index";
      if ( a1 <= 0x1F02 )
      {
        if ( a1 == 7937 )
          return "DW_FORM_GNU_addr_index";
      }
      else
      {
        if ( a1 == 7968 )
          return "DW_FORM_GNU_ref_alt";
        if ( a1 == 7969 )
          return "DW_FORM_GNU_strp_alt";
      }
      return 0;
    }
    if ( a1 == 33 )
    {
      return "DW_FORM_implicit_const";
    }
    else if ( a1 >= 0x21 )
    {
      if ( a1 == 34 )
        return "DW_FORM_loclistx";
      else
        return "DW_FORM_rnglistx";
    }
    else
    {
      return "DW_FORM_ref_sig8";
    }
  }
}
