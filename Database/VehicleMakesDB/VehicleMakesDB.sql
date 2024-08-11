USE VehicleMakesDB;
SELECT * FROM VehicleDetails

SELECT * FROM VehicleMasterDetails

--Create Master view
CREATE VIEW VehicleMasterDetails AS
SELECT VehicleDetails.ID,
	VehicleDetails.MakeID,
	Makes.Make,
	VehicleDetails.ModelID,
	MakeModels.ModelName,
	VehicleDetails.SubModelID,
	SubModels.SubModelName,
	VehicleDetails.BodyID,
	Bodies.BodyName,
	VehicleDetails.Vehicle_Display_Name,
	VehicleDetails.Year,
	VehicleDetails.DriveTypeID,
	DriveTypes.DriveTypeName,
	VehicleDetails.Engine,
	VehicleDetails.Engine_CC,
	VehicleDetails.Engine_Cylinders,
	VehicleDetails.Engine_Liter_Display,
	VehicleDetails.FuelTypeID,
	FuelTypes.FuelTypeName,
	VehicleDetails.NumDoors

	from VehicleDetails 

	LEFT JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
	LEFT JOIN MakeModels ON MakeModels.ModelID = VehicleDetails.ModelID
	LEFT JOIN SubModels ON SubModels.SubModelID = VehicleDetails.SubModelID
	LEFT JOIN Bodies ON Bodies.BodyID = VehicleDetails.BodyID
	LEFT JOIN DriveTypes ON DriveTypes.DriveTypeID = VehicleDetails.DriveTypeID 
	LEFT JOIN FuelTypes ON FuelTypes.FuelTypeID = VehicleDetails.FuelTypeID
