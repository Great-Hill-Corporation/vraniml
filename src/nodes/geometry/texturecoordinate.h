#ifndef __TEXTURECOORDINATE_H3D
#define __TEXTURECOORDINATE_H3D
//-------------------------------------------------------------------------
// Copyright (c) 1997-1998 Great Hill Corporation
// All Rights Reserved.
//-------------------------------------------------------------------------
// WARNING: THIS FILE WAS CREATED AUTOMATICALLY
//-------------------------------------------------------------------------
#include "Nodes\Node.h"

/*----------------------------------------------------------------------
CLASS
	vrTextureCoordinate

	This class corresponds to the TextureCoordinate node in VRML.  
	<A href="../spec/part1/nodesRef.html#TextureCoordinate">Further information</a> 
	about this class is available in any VRML related documentation.

DESCRIPTION
	<ul>This node corresponds to the TextureCoordinate node as defined in the VRML97 
	specification.  Like all Node Classes this class is better described in the 
	<A href="../spec/index.html">VRML97 Specification</a>.  In particular, at this 
	<A href="../spec/part1/nodesRef.html#TextureCoordinate">link</a>.</ul>

NOTES
	<ul>
	<li>All node classes share certain aspects which are described <a href="../nodespec.htm">here</a>.</li>
	</ul>

EXAMPLE CODE
	<pre>
	// None.
	</pre>

MEMBERS
----------------------------------------------------------------------*/
class LIBInterface vrTextureCoordinate : public vrNode
{
protected:
	//<doc>------------------------------------------------------------
	//<dd>Corresponds to the 'point' exposedField.
	//
	// [default] []
	//
	MFVec2f             	m_Point;


public:
	//<doc>------------------------------------------------------------
	// <dd>Default constructor.
	//
	vrTextureCoordinate(void);

	//<doc>------------------------------------------------------------
	// <dd>Copy constructor.
	//
	vrTextureCoordinate(const vrTextureCoordinate& v);

	//<doc>------------------------------------------------------------
	// <dd>Destructor.
	//
	virtual ~vrTextureCoordinate(void);

	//<doc>------------------------------------------------------------
	// <dd>Equals operator.
	//
	vrTextureCoordinate& operator=(const vrTextureCoordinate& v);

	//<doc>------------------------------------------------------------
	// <dd>Returns an exact copy of the given node.
	//
	virtual SFNode Clone(void) const;


	//<doc>------------------------------------------------------------
	// <dd>Add an item to the m_Point array (grow if needed).
	//
	// [in] point: The value to add to the m_Point array.
	//
	void AddPoint(const SFVec2f& point);

	//<doc>------------------------------------------------------------
	// <dd>Replace the values of the m_Point member (copies values).
	//
	// [in] point: The m_Point array.
	//
	void SetPoint(const MFVec2f& point);

	//<doc>------------------------------------------------------------
	// <dd>Return the number of values in the m_Point member.
	//
	SFInt32 GetNPoints(void) const;

	//<doc>------------------------------------------------------------
	// <dd>Return the nth value in the m_Point member.
	//
	// [in] n: The index into the array.
	//
	SFVec2f GetPoint(SFInt32 n) const;

	//<doc>------------------------------------------------------------
	// <dd>Return the m_Point member.
	//
	const MFVec2f& GetPointArray(void) const;


	//<nodoc>------------------------------------------------------------
	// <dd>Set the value of a field given the field's name and a value.
	// <dd>Note: Error checking is done on 'fieldName' but cannot be done on 'val',
	// <dd>      so make sure you send the correct type of data to this method.
	//
	// [in] fieldName: The name of the field to set (as specified in the VRML97 specification).
	// [in] val: Void pointer to a field of the type corresponding to fieldName.
	//
	virtual SFBool SetFieldValue(const SFString& fieldName, void *val);


	//<doc>------------------------------------------------------------
	// <dd>Respond to a traversal by an arbitrary traverser.  Note: Normally, nodes just call t->Traverse(this)
	// <dd>to have the traverser handle the traversal.  you may override this method in your derived class to
	// <dd>handle traversals of node types.
	//
	// [in] trav: The vrTraverser requesting the traversal.
	//
	virtual void Traverse(vrTraverser *trav) const;

	//<doc>------------------------------------------------------------
	// <dd>Receive an event during an event cascade or directly from caller.
	//
	// [in] event: The vrEvent to be processed.
	//
	virtual void ReceiveEventIn(vrEvent *event);

	//<doc>------------------------------------------------------------
	// <dd>Returns TRUE if the node (or a particular field) is in it's default state.
	//
	// [in] fieldName: The field to check for default value.  NULL implies check all fields of this node.
	// [out] field: If non-NULL the value of the field will be returned in field.
	//
	virtual SFBool IsDefault(const SFString& fieldName=nullString, vrField *field=NULL) const;

	//<doc>------------------------------------------------------------
	// <dd>Declare that this node may be runtime typed and dynamically created. [ DECLARE_NODE ]
	//
	DECLARE_NODE(vrTextureCoordinate);

};

//----------------------------------------------------------------------
// exposedField sets and gets inlines
inline void vrTextureCoordinate::AddPoint(const SFVec2f& point)
{
	m_Point.AddValue(point);
}

inline void vrTextureCoordinate::SetPoint(const MFVec2f& point)
{
	m_Point.Clear();
	m_Point = point;
}

inline SFInt32 vrTextureCoordinate::GetNPoints(void) const
{
	return m_Point.GetCount();
}

inline SFVec2f vrTextureCoordinate::GetPoint(SFInt32 n) const
{
	return m_Point[n];
}

inline const MFVec2f& vrTextureCoordinate::GetPointArray(void) const
{
	return m_Point;
}

inline void vrTextureCoordinate::Traverse(vrTraverser *t) const
{
	t->Traverse(this);
}
#endif

